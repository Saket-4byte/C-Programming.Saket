#include <stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct  pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} pokemon;
void change(pokemon* p){
    // (*p).hp=70;  // (*x).something = x->somthing
    p->hp=70;
    (*p).attack=80;
    (*p).speed=110;
    (*p).tier='S';
    strcpy((*p).name,"Raichu");
}
int main(){
    // another way of initializing

    pokemon pikachu = {60,70,100,'A',"Pikachu"}; //note order should be same as above in structure
    // pikachu.hp=60;
    // pikachu.attack=70;
    // pikachu.speed=100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name,"Pikachu");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    change(&pikachu);// uppar ek pointer hai esliye address(&) ko change karrhe hai
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);
    printf("%s\n",pikachu.name);

    return 0;
}