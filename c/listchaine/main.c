#include <stdio.h>
#include<stdlib.h>

struct TypeLivre
{
    char titre [20];
    int annee;

    struct TypeLivre *suivent;
};

void printList(struct TypeLivre *n)
{
  while (n != NULL)
  {
     printf("titre : %s et année : %d\n", n->titre ,n->annee );
     n = n->suivent;
  }
}



int main()
{
  struct TypeLivre* premiere = NULL;
  struct TypeLivre* deuxieme = NULL;
  struct TypeLivre* troisieme = NULL;

  premiere  = (struct TypeLivre*)malloc(sizeof(struct TypeLivre));
  deuxieme = (struct TypeLivre*)malloc(sizeof(struct TypeLivre));
  troisieme  = (struct TypeLivre*)malloc(sizeof(struct TypeLivre));

  strcpy(premiere->titre,"tintin");
  premiere->annee=1569;
  //premiere->suivent = deuxieme;

  strcpy(deuxieme ->titre,"rose");
  deuxieme->annee=1570;
  //deuxieme->suivent = troisieme;

  strcpy(troisieme->titre,"jack");
  troisieme->annee=1596;
  //troisieme->suivent = NULL;

 printList(premiere);

  return 0;
}

void ajouter (struct TypeLivre first,char * title)
{
    struct TypeLivre New = malloc(sizeof(struct TypeLivre));
    New.titre=title;
    first.suivent=New;
}

