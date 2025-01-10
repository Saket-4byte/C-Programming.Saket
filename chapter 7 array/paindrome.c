#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("enter element number%d:",i+1);
        scanf("%d",&arr[i]);
    }
    int palindrome=1;
     for(int i=0;i<=n-1;i++){
        for(int j=n-1-i;j>=0;j--){
            if(i==j){
                palindrome=1;
            }
            if (arr[i]!=arr[j]){
                palindrome=0;
                break;
            }
          
        }
       
    }
    if(palindrome==1){
        printf("it is a palindrome");
    }
    else {
        printf("it is not a palindrome");
    }
    return 0;
}