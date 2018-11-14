#include <stdio.h>
#include <string.h>

struct Livres {
   char  titre[50];
};

void printLivre( struct Livres *liv ) {
   printf( "titre de livre : %s\n",liv->titre);
}


int main()
{
    struct Livres liv1;
    struct Livres liv2;
    struct Livres liv3;
    struct Livres liv4;
    struct Livres liv5;

    /*liv 1*/
    strcpy(liv1.titre, "lapin");
    /*liv 2*/
    strcpy(liv2.titre, "lion");
    /*liv 3*/
    strcpy(liv3.titre, "rose");
    /*liv 4*/
    strcpy(liv4.titre, "tin tin");
    /*liv 5*/
    strcpy(liv5.titre, "xman");

    /* print liv1 info by passing address of liv1 */
    printLivre( &liv1 );
    printLivre( &liv2 );
    printLivre( &liv3 );
    printLivre( &liv4  );
    printLivre( &liv5 );

return 0;

}


