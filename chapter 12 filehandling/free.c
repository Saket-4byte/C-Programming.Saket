#include <stdio.h>
#include<stdlib.h>
int main(){
    // Null pointer->it is a reserved special address
    // int* ptr=NULL;
    // printf("%p",ptr); // 0x0
    int* ptr = (int*) calloc(10,4);
    int* p =ptr; // starting pe set kar diya
    ptr++;
    free(p);
    return 0;
}