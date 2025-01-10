#include<stdio.h>
int main(){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    int a=1;
    int b=1;
    int sum =1;//1 se initialize isliye kiye kyuki 1st and 2nd term 1 hi hai and en dono term me loop chalega hi nhi to as it is print hojayega
    for (int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("the %dth of fibonacci is %d",n,sum);
    return 0;
    }