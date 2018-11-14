#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char filename[15];
    //char ch;
    char c[1000];
    /*-------------------------pour lire le ficher--------------------------*/


    printf("file name ? \n");
    gets(filename);
    //scanf("%s",filename);
    printf("file name : %s \n",filename);



    fptr=fopen("filename","r");


    if (fptr == NULL)
        {
            printf("\n file not oppening \n");
            exit (1);
        }

    /*
    ch = fgetc(fptr);
    while(ch != EOF){
        printf("%c",ch);
        ch=fgetc(fptr);
    }*/

    fscanf(fptr,"%s", c);
    printf("Data from the file:\n%s", c);
    fclose (fptr);
    /*--------------------------------------------------fin--------------------------------*/
    return 0;
}
