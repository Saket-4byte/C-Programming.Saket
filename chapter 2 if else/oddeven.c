#include <stdio.h>
int main(){
    int n; // dabba ban gya
    printf("Enter a number : ");
    scanf("%d",&n); // dabbe me value daal di , n = 7
    if(n%2 == 0){ // even
        printf("Even number");
    }
    if (n%2!=0){ //odd
        printf("Odd number");
    }

    return 0;
}