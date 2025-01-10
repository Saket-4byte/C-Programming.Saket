#include<stdio.h>
int add(int a,int b){ //note ye a and b alag hai main function se
    return a+b; 
}
int main(){
    int a;
    printf("enter 1st number:");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number:");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("%d",sum);
    return 0;
}