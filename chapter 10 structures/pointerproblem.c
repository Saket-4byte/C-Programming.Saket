#include <stdio.h>
typedef int* pointer;
int main(){
    // int x=5;
    // int y=7;
    // int* a=&x;
    // int* b=&y;
    // printf("%p\n",a);
    // printf("%p",y);   

    // int x=5,y=7;
    // int* a=&x,b=&y;//int* a and int b computer ne socha ki sirf ek hi dabba bna hai pointer type ka
    // printf("%p\n",a);
    // printf("%p\n",b);

    // to solve this by using typedef
    int x=5,y=7;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}