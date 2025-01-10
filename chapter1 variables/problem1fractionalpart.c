#include <stdio.h>
int main (){
    float x;
    printf("enter a decimal number : ");
    scanf("%f",&x);
    int y = x;
    printf("The GIF is %d\n",y);
    float z = x - y;
    printf ("The fractional part of %f is %f",x , z , y);
    return 0;
}