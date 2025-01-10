#include<stdio.h>
void fun(int x[]){ //functions me hume size likhne ki jarurt nhi hai
    x[0]=10;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d\n",arr[0]);
    return 0;
}