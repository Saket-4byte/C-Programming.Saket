#include <stdio.h>

int main(){
    float x,y;
    printf("enter the coordinates(x,y)");
    scanf("%f %f",&x,&y);
    if(x==0){
        printf("point lies on yaxis");
    }   
    else if(y==0){
        printf("point lies on xaxis");
    }
    else if (x==0&&y==0){
        printf("point lies on origin");
    }
    else printf("point lies on both x and y axis");
    return 0;
}