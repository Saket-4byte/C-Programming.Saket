#include <stdio.h>

int main(){
    // 100,50,25,12.5....
    int n;
    float a=100;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%f ",a);
        a=a*0.5;
    }
    return 0;
}