#include <stdio.h>
/*
Strings are collection of characters enclosed in " double " quotes and to terminate a string we use a special operators \0 characters

String is an array of characters
To Declare an array we can use these methods

char str[] = "Hello" - this is array of characters and the sizeof would return 1 per element + the \0.
char *str[] = "Hello" - pointer string 

*/

int main() {

    // char str[] = "Hello\0hello";
    // printf("%s\n",str); // Only str not &str because str itself is a pointer
    // puts(str);
    
    // char str[20];
    char *str[] = "hellomygood";

    printf("%s",*str);

    return 0;
}