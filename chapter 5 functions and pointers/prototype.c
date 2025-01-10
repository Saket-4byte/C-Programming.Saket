#include<stdio.h>
int main(){
    void fun(); //function prototype ye krne se agar hum external function ko kahi pe bhi rakhe wo chal jayega
    fun();
    return 0;
}
void fun(){
    printf("hello");
}