#include <stdio.h>
int main(){
    int r;
    float area;
    printf("Enter radius = ");
    scanf("%d",&r);
    float pi = 3.1415;
    area = pi*r*r;
    printf("The area of the circle = %f",area);
    return 0 ;


}