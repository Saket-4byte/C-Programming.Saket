#include<stdio.h>
int main(){
    struct pokemon{ // user defined data type
        int hp;
        int speed;
        int attack;
        char tier; // S,A,B,C,D
    } pikachu,charizard,mewto;
   
    printf("enter the attack of pikachu:\n");
    scanf("%d",&pikachu.attack);
    // pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';


   
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

    
    
    mewto.attack=170;
    mewto.hp=150;
    mewto.speed=200;
    mewto.tier='G';

    printf("%d",pikachu.attack);
    return 0;
}