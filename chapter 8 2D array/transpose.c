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
    // 1 2 3
    // 4 5 6

    // 1 4
    // 2 5
    // 3 6
    int brr[c][r];
   
    for(int i=0;i<c;i++){ // c=3 r=2
        for(int j=0;j<r;j++){ // r=2
            // printf("%d ",arr[j][i]);
            brr[i][j]=arr[j][i];
        }
       
    }
    // printing brr
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;  
}