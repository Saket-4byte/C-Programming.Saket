#include <stdio.h>
int main(){
    int a ,b,c;
    printf("enter the age of ram: ");
    scanf("%d",&a);
    printf("enter the age of shyam: ");
    scanf("%d",&b);
    printf("enter the age of ajay: ");
    scanf("%d",&c);
       if (a < b && a < c)
    {
        printf("%d is youngest",a);
    }
    else if (b < a && b<c)
    {
        printf("%d is youngest",b);
    }
    else if (c<a && c<b){
        printf("%d is youngest",c);
    }
    else{
        printf("the ages is same");
    }
    return 0;

}