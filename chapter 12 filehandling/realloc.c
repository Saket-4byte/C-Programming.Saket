#include <stdio.h>
#include<stdlib.h>
int main(){
    int* ptr= (int*)malloc(10*4);
    printf("%p\n",ptr); // 00BE1598
    ptr = realloc(ptr,2000*4);
    printf("%p",ptr); // 00BE3C40   
    return 0;
}