#include <stdio.h>
#include<stdbool.h>
int main(){
    int r;
    printf("enter row:");
    scanf("%d",&r);
    int c;
    printf("enter column:");
    scanf("%d",&c);
    int arr[r][c];
    int brr[c][r];
    bool flag = false;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           if(arr[i][j]==brr[i][j]){
            flag = true;
           }
        }
    }
    if (flag==true) printf("it is symmetric\n");
    else printf("it is not symmetric");
    return 0;
}