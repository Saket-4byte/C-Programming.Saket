#include <stdio.h>

int main(){
    // int a =5;
    // int* x=&a;
    // printf("%p",x);//%p se address print hota hai yani yha a ka address print hojayega
    // printf("\n%p",&x); // pointer ke address ko print karrha hai
    int a =25;
    int* x=&a;
    printf("%d",*x);
    return 0;
}