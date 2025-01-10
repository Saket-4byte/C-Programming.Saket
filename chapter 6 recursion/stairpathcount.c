#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    int totalways = stair(n-1) + stair(n-2); 
}
int main(){
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",stair(n));
    return 0;
}