#include <stdio.h>

int main(){
    char arr[]={'H','e','l','l','o','\0'};//size na dalne pe bhi print hojayega
    // char ch='\0'; //null character
    // int x=0;
    // char a=(char)x; //a->'\0' 
    // printf("%c",a);  // \0 print nhi hoga   
    int i=0;
    while(arr[i]!='\0'){ //jab tak array ka index \0 ke barabar nhi hota print karate raho
        printf("%c ",arr[i]);
        i++;
    }
    return 0;
}