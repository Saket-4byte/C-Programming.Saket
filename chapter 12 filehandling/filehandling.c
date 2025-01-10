#include <stdio.h>

int main(){
    // to open or read a file
    FILE* ptr=fopen("saket.txt","r");   
    char str[100];
    // while(fgets(str,100,ptr)!=NULL)
    //     printf("%s",str);
    if(fgets(str,100,ptr)!=NULL)
        printf("%s",str);
    return 0;
}