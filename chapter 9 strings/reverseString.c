#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("enter a string"); // printf karna hai
    scanf("%[^\n]s",str); //or gets(str);->yani input karwani hai
    // puts("the size of is :"); // automatically \n bhi de deta hai
    // to find the size of string
    // int size =0;
    // int i=0;
    // while(str[i]!='\0'){
    //     size++;
    //     i++;
    // }
    // printf("%d",size);
    // note -> \0 is not include in size number
    int size =0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    // in above we store the value of size
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the reverse string is:");
    puts(str);
    return 0;
}