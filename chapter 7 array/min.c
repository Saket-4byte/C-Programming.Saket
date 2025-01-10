#include <stdio.h>
void smallest(int arr[],int n){
    int min=arr[0];
    for (int i=0;i<n;i++){
        if (min >arr[i]){
            min=arr[i];
        }
    }   
    printf("the smallest element is %d",min);
}
int main(){
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of an array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    smallest(arr,n);
    return 0;
}