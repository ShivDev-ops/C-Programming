#include <stdio.h>
#include <string.h> // This library consists of all string manipulation functions.


// String Manipulation Functions

int main() {

    char s1[] = "Hello\0";
    char s2[] = "Good morning!\0";

    // String is an array of characters terminated by \0.

    /*
    1 - strlen(s1) - Counts the number of characters in a string. Does not include null character.

    2 - strcpy(s1,s2) - s1 = s2, Copies all the characters and null values in the 1st pointer argument.
        - when doing s1 = s2 , s1 should have minimum array elements as of s2

    3 - strncpy(s1,s2,n) - Used when u only want to copy certain number of characters into the s1.

    4 - strupr(s1) - Converts all characters into uppercase.

    5 - strlwr(s1) - Converts all characters to lowercase.

    6 - strcmp(s1,s2) - This compares the two given strings based on their ascii values. Three conditions come up during this.
            a - if s1 == s2 = This gives 0. if the first element is equal in terms of ascii value then only it checks for this condition again otherwise goes to further conditions.
            b - if s1 > s2 = This gives 1.
            c - if s1 < s2 = This gives -1.

    7 - stricmp(s1,s2) - This is same as strcmp() but this ignores the case of the values A = a in this function.
    
    8 - strcat(s1,s2) - This concatenates the s2 in s1 => s1 = s1 + s2 in string terms

    9 - strchr(s1,"a") - This function helps finding the character in the string s1. Return the pointer if the character is there if not it returns the null pointer.

    10 - strstr(s1,"hello")- This functions find the substring inside the string s1. Returns the pointer of the first matched character in this case if matched returns pointer of H.

    11 - strncat(s1,s2,4) - Fixed number of characters merge with s1.

    12 - strrev(s1) - Reverses the string  

    */

    // strlen() = 
    // printf("%d\n",sizeof(s1)); // Takes 12 bytes = 10 characters + 1 space or null value + termination character \0.
    // printf("%d",strlen(s1)); // Gives 11 as in 10 Char + termination \0.

    // strcpy()
    // strcpy(s1,s2); // s1 = s2 
    // printf("%s",s1);

    // strncpy()
    // strncpy(s1,s2,5); // Only 5 char from s2 go to s1.
    // strncpy(s1,s2,2); // Only 1st two characters from s2 will replace first 2 of s1. Others will be printed normally
    // printf("%s",s1); 

    // strupr()
    // strupr(s1);
    // printf("%s",s1);

    

    return 0;
}