#include <stdio.h>

int main(){
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    // for (int i=1;i<=5;i++){
    //     for(int j=1;j<=5;j++){
    //         if(j==3 || i==3) printf("*"); // ||(or) isliye use kiye kyuki hame pura row and column of that number done me print karana tha star aur agar sirf and(&&) lete to i and j ka common me print karata
    //         else printf("#");
    //     }
    //     printf("\n");
    // }
    // for (int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         int a =n/2+1;
    //         if(j==a || i==a) printf("*"); 
    //         else printf("#");
    //     }
    //     printf("\n");
    // }
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a =n/2+1;
            if(j==a || i==a) printf("*"); 
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}