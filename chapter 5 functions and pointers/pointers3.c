#include <stdio.h>

int main(){
    int a =5;
    int* x=&a; //int* -> int ka address store karta hai
    //vvip -> *x=7; a is changed
    int** y=&x; //int** -> int* ka address store karta hai
    int*** z=&y;
    // printf("%p\n",&x); 
    // printf("%p\n",y);  
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d",***z); 
    return 0;
}