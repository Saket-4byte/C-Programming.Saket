#include <stdio.h>
int main(){
    char ch[24];
printf("name:");
    scanf("%[^\n]s",ch);
    printf("%s",ch);
    return 0;
}