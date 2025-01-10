#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5]={8,4,9,10,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // bubble sort in descending order
    for(int i=0;i<n-1;i++){
        bool flag = true; 
        for(int j=0;j<=n-2-i;j++){ //or j<n-1-i
            if(arr[j]<arr[j+1]){
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
