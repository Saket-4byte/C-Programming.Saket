#include <stdio.h>

int main(){
    int a; //operands
    scanf("%d",&a);
    char ch; // operator->+,-,/,*
    scanf("%c",&ch);
    int b; //operands
    scanf("%d",&b);
    switch (ch){
        case '+':
        printf("%d",a+b);
        break;
    case '-':
        printf("%d",a-b);
        break;
    case '*':
        printf("%d",a*b);
        break;
    case '/':
        printf("%f",(float)a/b);
        break;
    default :
        printf("invalid operator");
    }
    return 0;
}