#include<stdio.h>
int main(){
    int n ;
    printf("enter any number:");
    scanf("%d",&n);
    int given_number=n;
    int r=0;
    while (n>0)
    {
        r=r*10;
        r=r+n%10;
        n = n/10;
    }
    printf("the reverse number is %d\n",r);
    int sum = given_number+r;
    printf("the sum of given number and reverse number is %d\n",sum);
    return 0;
    
}
    

