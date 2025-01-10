#include <stdio.h>
#include<string.h>
int main(){
    struct person{
        char name[25];
        int age;
        float salary;
    }a,b;
    printf("enter the detais of 1st person\n");
    printf("enter the salary:");
    scanf("%f",&a.salary);
    printf("enter the age:");
    scanf("%d",&a.age);
    getchar();
    printf("enter the name:");
    scanf("%[^\n]",a.name);

    printf("enter the detais of 2nd person\n");
    printf("enter the salary:");
    scanf("%f",&b.salary);
    printf("enter the age");
    scanf("%d",&b.age);
    printf("enter the name:");
    scanf("%[^\n]s",&b.name);
    printf("the name of 1st person is %s",a.name);
    printf("age of 2nd person is %d",b.age);

    return 0;
}