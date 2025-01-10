#include <stdio.h>

int main(){
    int arr[5]={1,2,1,2,1};
    // to print the addresss of all the element present in the array using loop
    for(int i=0;i<5;i++){
        printf("%p\n",&arr[i]);
    }
    printf("%p\n",&arr[0]);
    // printf("%p\n",&arr[1]);
    // printf("%p\n",&arr[2]);
    // printf("%p\n",&arr[3]);
    // printf("%p\n",&arr[4]);   
    return 0;
}