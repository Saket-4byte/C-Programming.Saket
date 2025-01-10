#include <stdio.h>
#include<string.h>
int main(){
     typedef struct  pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon{
        pokemon normal; // normal pokemon ke sare attributes ese me aagye
        char ability[10];
    } legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    } godpokemon;

    godpokemon arceus;
    arceus.specialattack=300;
    strcpy(arceus.legend.ability,"turn anyone to stone");
    arceus .legend.normal.attack=987;


    legendarypokemon mewto;
    strcpy(mewto.ability,"pressure");
    mewto.normal.hp=150;
    mewto.normal.attack=100;
    strcpy(mewto.normal.name,"mewto");
    mewto.normal.speed=180;
    mewto.normal.tier=' s';
    return 0;
}