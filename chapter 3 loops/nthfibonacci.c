#include <stdio.h>

int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum=1;
    printf("the 1st fibonacci number is 1\n");
    printf("the 2nd fibonacci number is 1\n");
    for (int i=3;i<=n;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("the %dth fibonacci number is %d\n",i,sum);
    }
    return 0;
}