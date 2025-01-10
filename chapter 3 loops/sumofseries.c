#include<stdio.h>
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    // 1+2+3+4....nterms
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum is: %d",sum);
    return 0;
}