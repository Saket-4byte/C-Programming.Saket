#include<stdio.h>
#include<string.h>
int main(){
    typedef struct Book{
        char name[50];
        int noofpages;
        float prices;
    } Book;
    // yani agar hume baar-2 struct naya dabba na banane se typedef ke madad se kar sakte hai
    
    Book d;
    Book a;
    Book b;
    Book c;
  
    a.noofpages=100;
    a.prices=411.5;
    strcpy(a.name,"Secret Seven");

  
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