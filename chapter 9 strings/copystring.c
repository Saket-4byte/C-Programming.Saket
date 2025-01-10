#include <stdio.h>
#include<stdio.h>
int main(){
    // char s1[]="physics wallah";
    // char* s2=s1; // s2 is a shallow copy kyuki wo same jagah point karrha hai
    // s1[0]='M';
    // printf("%s",s2);

    // deep copy
    // char s1[]="physics wallah";
    // char s2[]="physcis wallah"; // dono hi diffrent strings hai
    // s2[0]='M';
    // printf("%s\n",s1);
    // printf("%s",s2);

    char* s1="physics wallah";
    char* s2;
    s2=s1;
    s2="college wallah";
    printf("%s\n",s1);
    printf("%s",s2);
    return 0;
}