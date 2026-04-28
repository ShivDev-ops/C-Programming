#include <stdio.h>
#include <stdlib.h>

/*
1 - Null Pointer - A pointer when it is not pointing to any variable.
2 - Wild Pointer - Any pointer which is declared but not initialized. 
3 - Void Pointer - Generic pointer which can point to any data type.
4 - Dangling Pointer - 
5 - Constant Pointer - 

*/

int main() {

    // NULL Pointer
    // int *ptr = NULL;
    // printf("%d",ptr); // 0
    // printf("%d",*ptr); // Error because it isn't pointing anywhere
    
    // Wild Pointer
    // int *ptr;
    // printf("%d",ptr);
    // printf("%d",*ptr);

    // Void Pointer 
    // int a = 10;
    // int b = 'z';
    // int c = 11;
    // void *ptr = &a;  
    // void *ptr1 = &b;
    // void *ptr2 = &c;

    // Constant Pointer

    // Dangling Pointer
    int *ptr = (int*)malloc(4); // 4 is the value of this (number * sizeof(datatype)) stores the amount of variables we are initializing
    scanf("%d",ptr); // not using &ptr because ptr already has the address of that variable
    printf("%d",*ptr);
    free(ptr);
    // printf("%d",*ptr); // This will give you a error. This is dangling pointer when you dont have a fixed memory location for that specific pointer.
    ptr = NULL; //
    printf("%d",ptr); // This will also not work

    
    // printf("%d\n",*(int*)ptr); // To de reference the pointer we use this type cast to print the output
    // printf("%d \n",*(char*)ptr1);

    // printf("%d",*(int*)ptr + *(int*)ptr2);

    return 0;
}
