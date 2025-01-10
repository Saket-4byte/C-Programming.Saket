#include <stdio.h>

int main(){
    FILE* ptr = fopen("ankit.txt","w");// w-> write mode  // creating a file
    char str[]="placement lagegi yahi se wo bhi 1cr";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}