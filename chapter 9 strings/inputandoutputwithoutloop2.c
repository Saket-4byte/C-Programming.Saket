#include <stdio.h>
#include<string.h>
int main(){
    // char str[] // without giving a size hum declare nhi kar sakte yani hum bina size ke input nhi le sakte
    // char str[]="college wallah"; // bina size ke hum initialization kar sakte hai 
    char str[40];
    // scanf("%s",str);
    // ampersand is not use in string 
    // if we write any word after space it cannot display i.e.before space it can display
    gets(str); // entire sentence can be input if i not use scanf
    // method 2 of scanf if we use only scanf then scanf will modify in this way
    // scanf("%[^\n]s",str); // this will take all words with space
    printf("your input was: %s",str);

       
    return 0;
}