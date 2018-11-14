#include <stdio.h>


enum jours { lundi, mardi, mercredi, jeudi, vendredi, samedi, dimanche };


int main(void)
{
    enum jours j;

   // j=lundi;

    for(j=lundi;j<=dimanche;j++){
        printf("%d \n",j);
    }



    return 0;
}
