#include <stdio.h>
#include<string.h>
int main(){
    // char str[]="college wallah";
    // str = "physics wallah";
    // printf("%s",str);
    // output->error

    // char* ptr="college wallah";
    // ptr = "physics wallah";
    // ptr[0]='p';
    // printf("%s",ptr);
    // output->nothing print yani individual characters print nhi hote

    // char* ptr="college wallah";
    // ptr = "physics wallah";
    // printf("%s",ptr);
    // output->physics wallah

    // char str[]="college wallah";
    // char* ptr = str;
    // ptr="physics wallah";
    // printf("%s",str);
    // output->college wallah

    char str[]="college wallah";
    char* p= str;
    *p = 'p';
    printf("%s",str);
    // return 0;
}