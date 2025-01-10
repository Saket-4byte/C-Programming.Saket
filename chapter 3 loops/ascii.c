#include <stdio.h>

int main(){
    // what is typecasting
    // int x=65;
    // printf("%d\n",x);
    // char ch=(char)x; integer value ke hisab se alphabet print karega
    // printf("%c\n",ch);
    for(int i=65;i<=90;i++){
        char ch=(char)i;
        printf("%c -> ",ch);
        printf("%d\n",i);
    }
    return 0;
}