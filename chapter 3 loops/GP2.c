#include<stdio.h>
int main(){
    int n;
    int a =3;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        printf("%d ",a);
        a=a*4;
    }
    return 0;
}