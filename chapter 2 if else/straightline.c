#include <stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3;
    float m1,m2;
    printf("enter x1,y1,x2,y2,x3,y3: ");
    scanf("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);
    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);
    if (m1 == m2){
        printf("points fall on straight line");
    }
    else{
        printf("points not fall on straight line");
    }
    return 0;

}