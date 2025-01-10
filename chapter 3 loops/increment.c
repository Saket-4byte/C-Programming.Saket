#include <stdio.h>

int main(){
    // 1. pre increment
    // int x=1;
    // printf("%d",++x); // pahle x ko badha ho tab use kro
    // 2. post increment
    // int x=1;
    // printf("%d\n",x++); // pahle x ko print kro tab badhao
    // printf("%d\n",x); // ab yha check kiye ki hmara x badha ki nhi
    // 3. pre decrement
    // int x=2;
    // printf("%d\n",--x); // pahle x ko ghatao tab print karo
    // 4. post decrement
    int x=3;
    printf("%d\n",x--); // pahle x ko print karo phir ghatao
    printf("%d",x); // x ki new value ko print karwaya
    return 0;
}