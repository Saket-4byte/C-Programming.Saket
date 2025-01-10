#include <stdio.h>

int main(){
    // int a[4]={1,2,3,4};
    // printf("%p\n",&a[0]);
    // printf("%p\n",&a[1]);
    // printf("%p\n",&a[2]);
    // printf("%p\n",&a[3]);
    // enke address pe 4byte ka antar hai
    char arr[4]={'a','t','l','a'};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    // enke address pe sirf 1byte ka antar hai
    return 0;
}