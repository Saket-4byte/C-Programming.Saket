#include <stdio.h>

int main(){
    int a , b,c;
    printf("enter the ages of ram , shyam and ajay:");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(a<c){
            printf("ram have youngest age ");
        }
        else printf("ajay have youngest age");
    }   
    else {//a>b
        if(b<c){
            printf("shyam have youngest age");
        }
        else printf("ajay have youngest age");
    }
    return 0;
}