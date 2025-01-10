#include <stdio.h>
int main(){
    int a , p , l , b;
    printf("Enter l = ");
    scanf("%d",&l);
    printf("Enter b = ");
    scanf("%d",&b);
    a = l*b;
    p = 2 *(l+b);
    if (a>p){
        printf("area is greater");
    }
    if (a<p){
        printf("perimeter is greater");
    }
    if (a==p){
        printf("area = perimeter");
    }
    return 0;
}