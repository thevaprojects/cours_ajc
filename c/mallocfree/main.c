#include <stdio.h>
#include <stdlib.h>

int main()
{

    char* a;
    a=malloc(1);
    //a=(char*)malloc(1);
    //a= malloc(sizeof(char)) ;
    *a='N';

   /* char b='N';
    char *a =&b;*/

    printf("%c \n",*a);

    free(a);
    printf("%c \n",*a);

    return 0;
}
