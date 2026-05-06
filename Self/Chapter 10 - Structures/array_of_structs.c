#include <stdio.h>

struct student{
    char name[20];
    int marks;
};

int main() {

    int n = 5;
    struct student s1[n];

    for (int i = 0; i < n; i++){
        printf("Enter Details of Student %d\n",i);
        printf("Enter Name: ");
        fgets(s1[i].name,20,stdin);
        printf("Enter Marks: ");
        scanf("%d",&s1[i].marks);
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        printf("Student %d Details: %s %d",i,s1[i].name,s1[i].marks);
        printf("\n");
    }


    return 0;
}