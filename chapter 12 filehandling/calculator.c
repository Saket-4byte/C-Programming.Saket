#include <stdio.h>

int main(){
    int a; //operands
    scanf("%d",&a);
    char ch; // operator->+,-,/,*
    scanf("%c",&ch);
    int b; //operands
    scanf("%d",&b);
    if(ch=='+')
        printf("%d",a+b);
    if(ch=='-')
        printf("%d",a-b);
    if(ch=='*')
        printf("%d",a*b);
    if(ch=='/')
        printf("%f",(float)a/b);
    return 0;
}