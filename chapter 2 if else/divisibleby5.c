#include <stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(n%5 == 0){
        printf("number is divisible by 5");
    }
    else{
        printf("not divisible by 5");
    }
    return 0;
}