#include<stdio.h>
#include<string.h>
int main(){
    struct person
    {
        char name[50];
        int salary;
        int age;
    } a,b;
    a.age=45;
    strcpy(a.name,"Sumit");
    a.salary=670;

    b.age=68;
    strcpy(b.name,"Saket");
    b.salary=765;

    printf("%s\n",a.name);
    printf("%d\n",b.age);
}