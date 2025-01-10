#include<stdio.h>
void england(){
    printf("you are in england\n"); //6
    return; //7  // return jaise hi khatam hua to hum dobara wha jayega jha se hume call lga hai
}
void australia(){
    printf("you are in australia\n"); //4
    england(); // calling england //5
    return;//8
    }
void india(){
    printf("you are in india\n"); //2
    australia(); //calling australia //3
    return;//9
}
int main(){
    india(); // calling india //1
    return 0;//10
}
// jo bhi function ko call krna to humesa uske upar kahi pe bhi hona chaye na ki jisko call laga rhe hai wo niche ho