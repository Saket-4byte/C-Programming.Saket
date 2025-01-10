#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        int noofpages;
        float prices;
    } a,b,c;

    // humne a naam ki book bnaye
    a.noofpages=100;
    a.prices=411.5;
    strcpy(a.name,"Secret Seven");

    // humne b naam ki book bnaye
    b.noofpages=200;
    b.prices=100.3;
    strcpy(b.name,"famous five");

    printf("%d\n",a.noofpages);
    printf("%f\n",a.prices);
    printf("%s\n",a.name);

    printf("%d\n",b.noofpages);
    printf("%f\n",b.prices);
    printf("%s\n",b.name);
    
    return 0;
} 