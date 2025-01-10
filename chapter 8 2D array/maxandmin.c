#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of column:");
    scanf("%d",&c);
    printf("enter all the elements:\n");
    int arr[r][c]; // r*c elements
    
    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    int idx_mini=0 , idx_minj=0;
    int idx_maxi=0 , idx_maxj=0;
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(max<arr[i][j]){
            max=arr[i][j];
            idx_maxi=i;
            idx_maxj=j;
            if(min>arr[i][j]){
            min=arr[i][j];
            idx_mini=i;
            idx_minj=j;
            }
        }        
        }
        printf("\n");
    }
    printf("maximum of given matrix is %d and the index is(%d,%d)\n",max,idx_maxi,idx_maxj);
    printf("minimum of given matrix is %d and the index is (%d,%d) ",min,idx_mini,idx_minj);


    return 0;  
}