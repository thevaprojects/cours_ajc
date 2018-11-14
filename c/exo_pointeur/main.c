#include <stdio.h>
#include <stdlib.h>

/*
int inverse(char table[255]){

    int i;

    for(i=strlen(table); i>=0; i--){

        printf("%s", table[i]);


    }
}
*/






int main()
{

char table[255]={0};
int i;

    printf("entrer votre text :");
    scanf("%s",table);
    printf("%s", table);

   for(i==strlen(table);i>=0;i--){


        printf("%s \n",table[i]);


    }

    return 0;
}
