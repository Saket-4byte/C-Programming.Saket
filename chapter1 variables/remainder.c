#include <stdio.h>
int main(){
    int a,b; // a>b
    printf("Enter dividend : ");
    scanf ("%d",&a);
    printf("Enter divisor : ");
    scanf ("%d",&b);
    // int q = a/b;            method 1 by  divisor algorithm 
    // int r = a - (b*q);
    // printf("The remainder when %d is divided by %d is %d : ", a, b ,r);
    int r = a%b;
    printf("The remainder when %d is divided by %d is %d : ", a, b ,r);
    return 0;   
}