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
    int l1, r1, l2, r2;
    printf("Enter the coordinates (l1, r1): ");
    scanf("%d %d", &l1, &r1);
    
    printf("Enter the coordinates (l2, r2): ");
    scanf("%d %d", &l2, &r2);
    
     for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
          sum=sum+arr[i][j];
        }
        printf("\n");
    }
    printf("the sum of the given matrix is %d",sum);


    return 0;  
}