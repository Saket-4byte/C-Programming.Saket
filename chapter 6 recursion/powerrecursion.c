// #include <stdio.h>

// int main(){
//     int a,b;
//     printf("enter a and b:");
//     scanf("%d%d",&a,&b);
//     int power=1;
//     for(int i=1;i<=b;i++){
//         power=power*a;
//     }   
//     printf("a raised to the power of b is %d",power);
//     return 0;
// }
#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int recAns = a*power(a,b-1);
    return recAns;
}
int main(){
    int a;
    printf("enter base: ");
    scanf("%d",&a);
    int b;
    printf("enter power: ");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised to the power %d is %d",a , b , p);
    return 0;
}