#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void datee(char* date,int* jour,int* mois,int* anne)
{

    *jour=(date[0]-48)*10+(date[1]-48);
    *mois=(date[3]-48)*10+(date[4]-48);
    *anne=(date[6]-48)*1000+(date[7]-48)*100+(date[8]-48)*10+date[9]-48;
 }

int main()
{
    int jour,mois,anne;
    char* date="01/02/2015";
    datee(date,&jour,&mois,&anne);

    printf("%2d/%2d/%4d \n",jour,mois,anne);

    /*methode 2*/
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    jour=t->tm_mon+1;
    mois=t->tm_mday;
    anne=t->tm_year+1900;

    printf("%d/%d/%d \n",jour,mois,anne);

    int i = 247593;
    char a[0];

    sprintf(str, "%d", i);

    int a[3];
    a[0]=jour;
    printf("%d\n",a[0]);





    return 0;
}

