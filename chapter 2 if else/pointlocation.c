#include <stdio.h>

int main(){
    int x,y;
    printf("enter the coordinates : ");
    scanf("%d %d",&x ,&y);
    if (x == 0 && y == 0){
        printf("the points at origin");
    }
    else if (x == 0){
        printf("the points at yaxis");
    }
    else if ( y == 0){
        printf("points at y axis");
    }
    else{
        printf("points does not lie on x and y axis");
    }

    return 0;
}