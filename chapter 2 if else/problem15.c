#include <stdio.h>
int main(){
    int a , b, c;
    printf("enter the age of ram:");
    scanf("%d",&a);
    printf("enter the age of shyam:");
    scanf("%d",&b);
    printf("enter the age of ajay:");
    scanf("%d",&c);
    if(a<b){
        if(a<c){
            printf("the youngest age is ram");
        }
        else{
            printf("the youngest age is ajay");
        }
    }
    else {
        if (b<c){
            printf("the youngest age is shyam");
        }
        else {
            printf("the youngest age is ajay");
        }
    }
    return 0;
}