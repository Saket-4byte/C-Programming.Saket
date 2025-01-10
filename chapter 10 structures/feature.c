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
    pokemon a,b,c;
    a.attack=100;
    a.hp=100;
    a.speed=90;
    a.tier='A';
    strcpy(a.name,"blastoise");
    // method 1 to copy the pokemon a in pokemon b
    // b.attack=a.attack;
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // strcpy(b.name,"blastoise");

// method2
b=a;// b me bhi a aagya
// note ye deep copy create hua hai yani agar b me change krte hai to a me reflect nhi hoga yani b ek alag chiz hai jisme a store hua 
b.attack=200;
c=a; // c me bhi a aagya

    printf("%d",b.attack);
    return 0;
}