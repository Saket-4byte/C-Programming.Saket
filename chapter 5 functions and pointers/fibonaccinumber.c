#include <stdio.h>
int fibonacci(int n ,int a,int b){
    printf("0 1 1 ");
    for (int i=1;i<=n-3;i++){
        int sum=a+b;
        a=b;
        b=sum;
        printf("%d ",sum);
    }
}
int main(){
    int n;
    printf("enter the term:");
    scanf("%d",&n);
    fibonacci(n,1,1);
    return 0;
}