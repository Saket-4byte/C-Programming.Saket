#include <stdio.h>

int main(){
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    // if (n%2 == 0){
    //     printf("even number");
    // }
    // else {
    //     printf("odd number");
    // }
    // method 2 by ternary operator
    // exp1 ? exp2 : exp3
    // n%2==0 ? printf("even number") : printf("odd number");
    n>9 && n<100 ? printf("%d is a two digit number",n) : printf("%d is not a two digit number",n);
    return 0;
}