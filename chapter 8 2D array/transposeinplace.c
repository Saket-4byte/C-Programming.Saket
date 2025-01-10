#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows/column:");
    scanf("%d",&n);
    printf("enter all the elements:\n");
    // input
    int arr[n][n]; // r*c elements
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose   
    for(int i=0;i<n;i++){ // c=3 r=2
        for(int j=i;j<n;j++){ // r=2
            //swapmarr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            }
       
    }
    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;  
}