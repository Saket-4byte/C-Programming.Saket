#include <stdio.h>

int main(){
    // int arr[5]={2,4,6,8,1};
    // for(int i=0;i<=4;i++){  //i=0,1,2,3,4
    //     printf("%d ",arr[i]);
    // }   
    // int arr[4];
    // for(int i=0;i<=4;i++){
    //     scanf("%d",&arr[i]);
    // }
    // // {1,2,3,4,5}
    // printf("%d",arr[1]);
    // int arr[4];
    // for(int i=0;i<=4;i++){
    //     printf("enter element number%d: ",i+1);
    //     scanf("%d",&arr[i]);
    // }
    // printf("%d",arr[1]);
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("enter element number%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);

    }

    return 0;
}