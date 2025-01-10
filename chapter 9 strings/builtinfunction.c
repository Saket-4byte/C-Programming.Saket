#include<stdio.h>
#include<string.h>
int main(){
    // char* str="raghav garg";
    // int x=strlen(str);
    // printf("%d",x);

    // char s1[12]="raghav garg";
    // char s2[12];
    // strcpy(s2,s1);
    // s2[0]='m'; // to check it is deep copy or not
    // printf("%s",s2);

    char s1[11]="raghav";
    char s2[]="garg";
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}