#include <stdio.h>
void swap(int* x, int* y){ // yha pointer isliye liye kyuki wo address ko store krta hai
    int temp;
    temp=*x; //2 //ye jha se address liye hai usko point krke uski value print kr dega
    *x=*y;//a=9
    *y = temp; //*y -> b=2
}

int main(){
    int a=2;
    int b=9;
    swap(&a,&b); // a and b ke address pass kr diye
    printf("the value of a is %d\n",a);   
    printf("the value of b is %d\n",b);   
    return 0;
}