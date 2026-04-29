#include <stdio.h>
/*
1 - atoi - string to integer 
2 - atof - string to float
3 - atol - string to long int
4 - itoa - integer to string
5 - sscanf() - alternate to convert string to float or integer
6 - sprintf() -  integer to string
*/

int main() {

    //sscanf() -
    // char str[] = "25";
    // float num; // or int num;
    // // sscanf(str,"%d",&num);
    // sscanf(str,"%f",&num);
    // printf("%.2f",num);


    // itoa
    int num = 25;
    char str[10];

    itoa(num,str,2); // num will be converted into binary and put into string
    printf("%s",str);
    itoa(num,str,10); // num will be converted into decimal and put into string
    printf("%s",str);
    itoa(num,str,16); // num will be converted into hexadecimal and put into string
    printf("%s",str);
    

    // sprintf()
    // int num = 25;
    // char str[10];

    // sprintf(str,"%d",num);
    // printf("%s",str);

    // To convert float to string
    // float num = 20.69;
    // char str[10];

    // sprintf(str,"%.2f",num);

    // printf("%s",str);

    return 0;
}