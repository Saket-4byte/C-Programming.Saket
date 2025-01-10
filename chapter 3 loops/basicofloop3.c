#include <stdio.h>
int main(){
    // scope of variable
    // for(int i=1;i<=5;i++){
    //     printf("hello world\n");
    // }
    // printf("%d",i); it show error 
    int i;
    for(i=1;i<=5;i++){
        printf("hello world\n");
    }
    printf("%d",i);
    return 0;
}