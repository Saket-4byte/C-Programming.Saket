#include <stdio.h>

int main(){
    char ch = 'A';
    char v='a';
    while (ch<='Z'){
    printf("%c -> %d | %c -> %d\n",ch,ch,v,v);;
    ch++;
    v++;
    }
    return 0;
}