#include <stdio.h>

int main(){
    // int a =5;
    // int* x;
    // x=&a;
    // printf("%p",&a);//%p se address print hota hai
    // printf("\n%p",x);
    int a =5;
    int* x=&a;
    // *x=7; a is changed
    printf("%d",a);
    return 0;
}