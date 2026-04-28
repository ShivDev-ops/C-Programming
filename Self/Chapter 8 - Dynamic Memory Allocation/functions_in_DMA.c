#include <stdio.h>
#include <stdlib.h> // This includes all four functions of DMA 

/* Four functions are : 
1 - malloc() - used for memory allocation, will give garbage value when printing the not assigned allocated memory. We can also say this memory location is unitialized thats why it stores garbage value

2 - calloc() - used for memory allocation, only diff is in case of calloc when printing the empty allocated memory as integer it will give zero.  This is initialized with the value of  0.

3 - realloc() - This is used to reserve memory for array elements in case youre adding more elements

4 - free() - 

Memory Leak - This is a situation occurs when you keep on allocating the memory is calloc or malloc but not using free(ptr) to remove that memory allocated  
*/

int main() {

    

    return 0;
}