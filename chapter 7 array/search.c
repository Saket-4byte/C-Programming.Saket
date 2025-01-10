#include <stdio.h>

int main(){
    // int arr[7]={1,2,3,4,5,6,7};
    // int x=4;
    // for(int i=0;i<=6;i++){
    //     if(arr[i]==x){
    //         printf("%d is present in the array and its index is %d",x,i);
    //         break;
    //     }
    // }
    // int arr[7]={12,21,30,42,21,6,7};
    // int x=21;
    // for(int i=0;i<=6;i++){
    //     if(arr[i]==x){
    //         printf("%d is present in the array and its index is %d\n",x,i);
    //         // break; to find all index where element is present so we dont use break
    //         // agar hame sirf 1st element btana hai to break laga dega
    //     }
    // }
    // agar hame last wala sirf element print karna hai
    int arr[7]={12,21,21,42,21,6,7};
    int x=21;
    for(int i=6;i>=0;i--){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d",x,i);
            break;
        }
    }
    return 0;
}