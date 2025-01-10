#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    // bubble sort
    // i sirf number of passes ko dikhaata hai
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-2-i;j++){ //or j<n-1-i
            if(arr[j]>arr[j+1]){
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp  ;
            }
        }
    } 
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
