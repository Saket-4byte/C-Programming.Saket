#include<stdio.h>
int main(){
    // int arr[7]={1,4,5,6,19,5,12};
    // int max=-1; //sabse chota number
    // for(int i=0;i<7;i++){
    //     if(max<arr[i]){
    //         max=arr[i];
    //     }
    // }
    // printf("%d",max);
    int arr[7]={-10,-4,-200,-80,-19,-5,-12};
    int max=arr[0]; //agar max ke andar pahla element store kr dega to kabhi galat nhi dega
    for(int i=0;i<7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    
    return 0;
}