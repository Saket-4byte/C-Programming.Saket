#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter number of integers you want: ");
    scanf("%d",&n);
    // method1 by using array
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }

    int* ptr=(int*) malloc(n*sizeof(int)); // ye hmara jagah bna diye
    int* p=ptr;
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    int* t=p;
    for(int i=1;i<=n;i++){
        printf("%d\n",(*p));
        p++;
    }

    return 0;
}