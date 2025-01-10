// method1
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter n:");
//     scanf("%d",&n);
//     int r;
//     printf("enter r:");
//     scanf("%d",&r);
//     int nfact = 1; //n!
//     int rfact=1;//r!
//     int nrfact=1;//n-r !
//     for(int i=2;i<=n;i++){
//         nfact = nfact*i;
//     }
//     for(int i=2;i<=r;i++){
//         rfact=rfact*i;
//     }
//     for(int i=2;i<=n-r;i++){
//         nrfact=nrfact*i;
//     }
//     int ncr=nfact/(rfact*nrfact);
//     printf("%d",ncr);
//     return 0;
// }
#include<stdio.h>
int factorial(int x){
    int fact=1; // yha humne fact ko define kiye
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr =  factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int r;
    printf("enter r:");
    scanf("%d",&r);
    // int nfact = factorial(n); //n!
    // int rfact=factorial(r);//r!
    // int nrfact=factorial(n-r);//n-r !
    // int ncr=nfact/(rfact*nrfact);
    // printf("%d",ncr);
    // int a = factorial(n); //to find the factorial of any number
    // printf("%d",a);
    // int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    // printf("%d",ncr);
    int ncr = combination(n,r);
     printf("%d",ncr);
    return 0;
}