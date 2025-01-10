#include <stdio.h>
int main(){
    int a , b , c;
    printf("Entetr first side:");
    scanf("%d",&a);
    printf("Entetr second side:");
    scanf("%d",&b);
    printf("Entetr third side:");
    scanf("%d",&c);
    if ((a+b)>c && (b+c)>a && (c+a)>b){
        printf("valid triangle");
    }
    else {
        printf("invalid triangle");    
    }

    return 0;   
}