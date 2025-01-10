#include <stdio.h>

int main(){
    char arr[]="college wallah is best channel for coders\0";//agar hum es tarike se character print karte hai double quotes me to \0 lagaye ya nhi esse koi matlab nhi computer apne aap laga deta hai
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
       
    return 0;
}