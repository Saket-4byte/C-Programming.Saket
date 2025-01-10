#include<stdio.h>
int main(){
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    // if (n%5 == 0 || n%3 == 0){
    //     if(n%15 != 0){
    //         printf("the number is divisible by 5 or 3 but not 15");
    //     }
    //     else{
    //         printf("the number is divisible by 15");
    //     }
    // }
    // else {
    //     printf("number is not divisible by 5 or 3");
    // }
    // method2
    if ((n%5 == 0 || n%3 == 0) && n%15 !=0){
        printf("number is divisible 5 or 3 but not 15");
    }
    else{
        printf("number is not matching required condition");
    }

    return 0;
}