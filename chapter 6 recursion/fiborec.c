#include<stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2); // multiple calls
}
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    // int x=fibo(n);
    printf("%d",fibo(n));
    return 0;
}