#include <stdio.h>

int main(){
    int arr[3][4]={1,0,1,1,0,1,0,1,1,1,1,1};
    // 1 0 1 1 -> 3
    // 0 1 0 1 -> 2
    // 1 1 1 1 -> 4
    int maxcount=0;
    int maxidx=0;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1) count++;
        }
        if(maxcount<count){
            maxcount=count;
            maxidx=i;
        }
    }   
    printf("the maximum number of 1 in row is %d and whose index is %d",maxcount,maxidx);
    return 0;
}