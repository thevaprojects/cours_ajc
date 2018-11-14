#include <stdio.h>
#include <stdlib.h>


/*function max*/
int max(int a,int b){
    if (a>b)
        return a;
    else
    return b;
}
/*function min*/
int min(int a,int b){
    if (a<b)
        return a;
    else
    return b;
}

/*function ascii*/

int ascii(char c){
    return (int)c;
    }

/*function char*/
char Char (int R){
    return R;
    }


/* function premmajuscule 1*/
/*
int premmajuscule(char line[])
{
    char resultat[255];
    int i ;

    for(i = 0; i < strlen(line); i++)
    {
        resultat[i] = line[i];
        if (resultat[0] >= 'a' && resultat[0] <= 'z') {
            resultat[0] -= 32;
        }
    }
    return resultat[i];

}
/*

/* function premmajuscule 2*/
/*void premmajuscule(char line[])*/
/*
char *premmajuscule(char line[])
{
    if (line[0] >= 'a' && line[0] <= 'z') { line[0]=line[0]-32; }

}*/

char *premmajuscule(char line[])
{
int i;

for (i=0; i<strlen(line); i++){
    if (line[i] >= 'a' && line[i] <= 'z') { line[i]=line[i]-32; }
}

return line;

}

int main()
{
/*exo 1*/

    printf("ascii de c : %d \n",ascii('a'));

    printf("ascii de c : %c \n",Char(56));



{
/*premmajuscule*/
    char line[255]={0};

/*
    printf("Entrez une phrase: ") ;
    scanf("%s",&line ) ;
  /* printf("line %s\n",line);*/

  premmajuscule(line);
     printf("%s \n",line) ; /*pour void expression*/


   /*printf("%s",premmajuscule(line)) ;*/
}


printf("\n\n");

{
char *p = "ce ci est un chaine" ;
char *q = p;
while (*q!=0){
printf("%c \n", *q);

printf("adresse pointeur %p \n",q);
q=q+1;
}


}

printf("\n\n");

{
char tableau[]="bonjour";
/*char *tab="bonjour";*/

char *tab = &tableau;
/*tab=&tableau;*/
/*char D[] = &tab;*/
/*tableau[0]='K';*/

printf("%s \n",tableau);
printf("%u \n",tableau);
printf("%s \n",tab);
printf("%u \n",tab);


}



/*avec les pointeurs*/



    return (0);

}
