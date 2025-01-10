#include <stdio.h>
int main(){
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    // method1
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){ //j->1 to a
            printf("* ");
        }
        a--;
        printf("\n");
    }
    return 0;
} 