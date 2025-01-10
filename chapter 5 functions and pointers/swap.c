// #include <stdio.h>

// int main(){
//        int a;
//        printf("enter a: ");
//        scanf("%d",&a);
//        int b;
//        printf("enter b: ");
//        scanf("%d",&b);
// swapping using third variable
//        int temp;
//        temp=a;
//        a=b;
//        b=temp;
//        printf("the value of a is %d",a);
//        printf("the value of b is %d",b);
//        return 0;
// }
#include <stdio.h>

int main(){
       int a;
       printf("enter a: ");
       scanf("%d",&a);
       int b;
       printf("enter b: ");
       scanf("%d",&b);
    //    swapping without third variable
       a=a+b;
       b=a-b;
       a=a-b; 
       printf("the value of a is %d",a);
       printf("the value of b is %d",b);
       return 0;
}