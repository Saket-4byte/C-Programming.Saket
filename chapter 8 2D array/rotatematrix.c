#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows/column:");
    scanf("%d",&n);
    printf("enter all the elements:\n");
    int arr[n][n]; // n*n elements
    // input
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // transpose   
    for(int i=0;i<n;i++){ // c=3 r=2
        for(int j=0;j<=i;j++){ // r=2
            //swap arr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
       
    }
     printf("\n");
    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // rotate
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            // swap arr[i][j] and arr[i][k]
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("\n");
    // output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;  
}