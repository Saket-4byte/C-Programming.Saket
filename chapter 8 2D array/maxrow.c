#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[3][4]={1 ,2,3,1,0,5,0,2,9,0,0,3};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int maxsum= -1;
    int maxrow=0;
     for(int i=0;i<3;i++){
       int rowsum=0;
        for(int j=0;j<4;j++){
            rowsum+=arr[i][j];
           
        }
        if (rowsum>maxsum){
            maxsum = rowsum;
            maxrow = i;
        }
        printf("\n");
    }
    printf("the sum of the maximum row is %d and whose row number  is %d",maxsum,maxrow);


    return 0;  
}