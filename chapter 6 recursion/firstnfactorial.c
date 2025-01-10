#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) {
        printf("factorial of %d is 1\n",n);
        return 1;
    } 
    int recAns =  n*factorial(n-1);
    printf("factorial of %d is %d\n",n,recAns);
    return recAns;
}
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}