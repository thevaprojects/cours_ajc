#include <stdio.h>
#include <stdlib.h>

struct livre
{
  char titre [30];
  char auteur[50];
  short an;
};


int main()
{

struct livre liv[5]={{"gun","aeo",1956},{"run","peo",1958},{"gin","keo",1956},{"bun","rai",1955},{"gun","lru",1956}};

/*etape1*/
FILE *fp;
fp=fopen("","");

/*si le ficher est null*/
if (fp == NULL)
    {
        fprintf(stderr, "\nError\n");
        exit (1);
    }

/*lire le fichier*/

for(int i=0;i<5;i++){
fprintf("livre %d : %s %s %d \n",i,liv[i].titre,liv[i].auteur,liv[i].an);

}



/*etape final*/
fclose (fp);

return 0;

}
