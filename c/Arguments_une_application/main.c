#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("le nombre d’arguments : %d et le nom du programme : %s \n\n",argc,argv[0]);

    for (int i=1 ; i<strlen(argv); i++ ){
        printf("%s \n",argv[i]);
    }

return 0;
}
