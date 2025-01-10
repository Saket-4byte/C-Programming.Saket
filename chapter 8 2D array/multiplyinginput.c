#include <stdio.h>

int main(){
    // 1st matrix order
    int m;
    printf("enter no. of rows of 1st matrix: ");
    scanf("%d",&m);
    int n;
    printf("enter no. of column of 1st matrix: ");
    scanf("%d",&n);   
    int a[m][n];
    //input the first matrix
    printf("enter the element of 1st matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // 2nd matrix order
    int p;
    printf("enter no. of rows of 2nd matrix:");
    scanf("%d",&p);
    int q;
    printf("enter no. of column of 2nd matrix: ");
    scanf("%d",&q);   
    int b[p][q];
    //input the second matrix
    printf("enter the element of 2nd matrix\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
    // check
    if(n!=p){
        printf("the matrices cannot be multiplied");
    }
    else{
        //multiplication
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                // i row of a, j column of b
                for(int k=0;k<n;k++){ // n or p dono me se koi bhi lelo
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        // print
        printf("the resultant matrix is\n");
         for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }        
    }
    return 0;
}