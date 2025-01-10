#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //it is known as optimising a bubble sort algorithm by bool
    for(int i=0;i<n-1;i++){
        bool flag = true; // false means array is not sorted yet and true means array is sorted to hume baar-2 loop lagane ki jarurat nhi hai yani hum 2nd pass me nhi jayege
        for(int j=0;j<=n-2-i;j++){ //or j<n-1-i
            if(arr[j]>arr[j+1]){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp  ;
            flag = false; // that means swapping hui
            }
        }
        if(flag == true) break;
    } 
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
