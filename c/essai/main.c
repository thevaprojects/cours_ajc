#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*met1*/

int  somme (int *a , int *b)
{
    int s;

    s=(*a)+(*b);
    return s;
}


/*met2*/
/*
int * somme (int *a , int *b)
{
    int *s=(int*)malloc(sizeof(int));
    *s=(*a)+(*b);

   return s;
}
*/

int main()
{

int a;
int b;


    printf("saisir un valeur :");
    scanf("%d",&a);
    printf("saisir un valeur :");
    scanf("%d",&b);

/*met1*/

    int ptr= somme(&a,&b);
    printf("sum = %d \n", ptr);

/*met2*/
    /*
    int * ptr= somme(&a,&b);
    printf("sum = %d \n", *ptr);
    */
}

