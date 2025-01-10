#include <stdio.h>
#define PI 3.14159265359
// we use macro function to reduce below three lines in one line
#define area(r) (PI*r*r)
// float area(float r){
//     return PI*r*r;
// }
int main(){
    // double x=3.14159265359;
    // printf("%.11f",x);
    // printf("%.11f",PI);
    printf("%f",area(10));
    return 0;
}