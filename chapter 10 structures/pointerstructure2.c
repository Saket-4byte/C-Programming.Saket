#include <stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct  pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp=60;
    pikachu.attack=70;
    pikachu.speed=100;
    pikachu.tier = 'A';
    strcpy(pikachu.name,"Pikachu");
    // int* x -> address of integer value store
    pokemon* x = &pikachu;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    // printf("%p\n",&pikachu.speed);
    // printf("%p\n",&pikachu.tier);
    // printf("%p\n",pikachu.name);
    // printf("%p\n",X);

// yani pointers ke through hum intialize and change dono kar sakte hai
    (*x).hp=70; // pikachu.hp=70
    (*x).attack=120;
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);

    return 0;
}