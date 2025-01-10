#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows:");
    scanf("%d",&r);
    int c;
    printf("enter the number of column:");
    scanf("%d",&c);
    int sum=0;
    printf("enter all the elements:\n");
    int arr[r][c]; // r*c elements
    for(int i=0;i<r;i++){

        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("the sum of the given matrix is %d",sum);


    return 0;  
}