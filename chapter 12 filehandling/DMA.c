#include <stdio.h>

int main(){
    int n;// 4bytes
    printf("enter array's size:");
    scanf("%d",&n);
    int arr[n]; // n*4 // yani ye compiler ke through allocate nhi horha hai ye runtime ke dorran allocate hoga
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }   
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   
    return 0;
}