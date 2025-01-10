#include <stdio.h>
void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
        printf("factoral of %d is %d\n",i,fact);
    }
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    factorial(n);
    return 0;
}