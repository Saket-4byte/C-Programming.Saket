#include <stdio.h>
int main(){
    int a , b,c;
    printf("Enter three number: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b){ // clearly b is out of race kyuki b ab largest nhi hosakta to c se competition hai
        if (a>c){
            printf("%d is greatest",a);    
        }
        else{ // a<c -> b<a<c kyuki agar a b se bada hai lekin a c se chota hai to b to c se chota hihoga
            printf("%d is largest",c);
        }
    }
    else{ // b>a -> a ab sabse bada nhi hai
        if (b>c){
            printf("%d is greatest",b);
        }
        else // c>b -> a<b<c b agar a se bda hai but b c se chota hai to c bada hogya sabse
        printf("%d is greatest",c);
    }
    return 0;

}