#include <stdio.h>
int main(){
    int cp , sp;
    printf("Enter cp: ");
    scanf("%d",&cp);
    printf("Enter sp: ");
    scanf("%d",&sp);
    if(sp>cp) {
        printf("profit");
    }
    else if (cp>sp){
        printf("loss");
    }   
    else{
        printf("no profit,no loss");
    }
    return 0;
}