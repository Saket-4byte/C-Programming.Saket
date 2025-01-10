#include <stdio.h>

int main(){
    char str[]="collegewallah is best";   
    int i=0;
    while(str[i]!='\0'){
        // printf("%c",str[i]);
        // printf("%c",i[str]);
        printf("%c",*(str+i));
        i++;
    }
    return 0;
}