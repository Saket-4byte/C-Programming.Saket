#include<stdio.h>
int maze2(int cr,int cc,int er,int ec){ //cr->current row, cc->current column, er->ending row,ec->ending column
    
    int totalways = rightways+downways;
    return totalways;
}
int main(){
    int n;
    printf("enter no. of rows of the maze : ");
    scanf("%d",&n);
    int m;
    printf("enter no. of column of maze: ");
    scanf("%d",&m);
    int noOfways = maze2(n,m);
    printf("%d",noOfways);
    return 0;
}