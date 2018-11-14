#include <stdio.h>
#define theva 4


struct livre
{
  char titre [30];
  char auteur[50];
  short an;
};

//struct livre liv[5]={{'gun','aeo',1956},{'run','peo',1958},{'gin','keo',1956},{'bun','rai',1955},{'gun','lru',1956}};



int main()
{
    struct livre liv[5]={{"gun","aeo",1956},{"run","peo",1958},{"gin","keo",1956},{"bun","rai",1955},{"gun","lru",1956}};

    for(int i=0;i<5;i++){
    printf("livre %d : %s %s %d \n",i,liv[i].titre,liv[i].auteur,liv[i].an);
}

    int a;
    a = theva+5;

}
