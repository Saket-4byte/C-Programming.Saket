#include <stdio.h>
int fibo(int n){
    if(n==1) return 1;
    if(n==0) return 0;
    return fibo(n-1)+fibo(n-2);
}
void printFibo(int n){
    for(int i=0;i<n;i++){
        printf("%d ",fibo(i));
    }
    return;
}
int main(){
    int n;
    printf("enter the term:");
    scanf("%d",&n);
    printf("the fibonacci series upto %d term\n",n);
    printFibo(n);   
    return 0;
}