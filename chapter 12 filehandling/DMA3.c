#include <stdio.h>
#include<stdlib.h>
int main(){
    int* ptr = (int*) calloc(10,sizeof(int));
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    ptr++;
    printf("%d\n",*ptr);
    return 0;
}
