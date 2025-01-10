#include<stdio.h>
int main(){
    int n;
    int given_number;
    int result;
    int r;
    for(int i=1;i<=500;i++){
        n = i;
        r=0;
        result=0;
        given_number=n;
        r=(n%10);
        result = result+r*r*r;
        n=n/10;
     if (result==i){
        printf("%d ",i);
    }
    }
    return 0;

    
}