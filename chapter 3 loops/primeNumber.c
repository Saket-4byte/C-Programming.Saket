#include <stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    // it only tells composite number but we have to check prime
    // for (int i=2;i<=n-1;i++){
    //     if(n%i==0){ //i is a factor of n
    //         printf("the given numer is composite\n");
    //         break;
    //     }
    // }
    int a=0;
      for (int i=2;i<=n-1;i++){
        if(n%i==0){ //i is a factor of n
            a =1;
            break;
        }

    }
    if (n==1) printf("1 is neither prime nor composite");
    else if (a==0) printf("the given number is  prime\n");
    else printf("the given number is composite\n");
    return 0;
}