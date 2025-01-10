#include<stdio.h>
int main(){
    float m1 = 100; //maths
    float m2 = 99; //chemistry
    float m3 = 95; //physics
    float m4 = 89; //english
    float m5 = 92; //physical education
    float p = ((m1+m2+m3+m4+m5)/500)*100;
    printf("Percentage of 5 subjects = %f",p);
    return 0;
}