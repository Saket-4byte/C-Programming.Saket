// C program to illustrate sizes of
// pointer of array
#include<stdio.h>

int main()
{
    int arr[] = { 3, 5, 6, 7, 9 };
    int *p = arr;
    int (*ptr)[5] = &arr;
    for(int i=0;i<5;i++){
        printf("%d ",*ptr);
    }
    return 0;
}
