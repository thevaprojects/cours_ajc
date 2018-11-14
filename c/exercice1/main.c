#include <stdio.h>
#include <stdlib.h>



int main()
{
int j=4;
   /* printf("Hello world!\n");*/
    printf("La valeur de i est %d\n",j);

{ int i=9;
  printf("La valeur de i j  est %d %d\n",i,j);
}

  printf("La valeur de j est %d \n",j);

  {
  int h=3.7;
  printf("La valeur de h est %d \n",h);

  }


  {
  int k=3.7 + 7.3;
  printf("La valeur de k est %d \n",k);

  }


  {
  int i=4;
  unsigned long j= 5642354354;

  printf("%d \n",sizeof(i));
  printf("%d \n",sizeof(j));

  }
/*exo 3*/
  {
  int i=1;

  while(i<10){

          if (i%2==0){
          printf("\n %d bonjour \n",i);
          }
          else
          printf("\n %d bn soir \n",i);
  i++;
  }
  }
/*exo 4*/
  {
  int i=1,j=1;

  while(i<5){
  j =1;
    while(j<5){
        if (j==3){
        break;
        }
        printf("%d %d \n",i,j);
    j++;
    }
   i++;
  }
  }

  /*exo 5*/
  int i=0;

  do{
    printf("\n %d \n",i);
    i=i+4;
  }
  while (i<=50);

/*exo6*/
for (int i=0; i<=100; i++){
    if(i%2==0){
        printf("%d paire \n",i);
    }
    else
        printf(" %d impaire \n",i);
}
/*....*/

printf("\n\n\n");

/*exo 7*/
for (char car='a';car<='z';car++){
    printf(" %c ",car);
}
/*............*/
printf("\n\n\n");

/*exo 8*/
for (int i=50000; i<50100; i++){
    printf(" %10d " ,i);
    printf(" %.10d " ,i);
}
/*..................................*/

printf("\n\n\n");

/*exo 8*/
int a=65;
int c=0;
for (char car='A';car<='Z';car++){


    printf("%c = %d ",car,a);
    a++;

c++;
if (c%3==0){
    printf("\n\n");
    }
else
    printf("\t\t"); /* \t = tab (tabulation) */


}
/*...................*/

 printf("\n\n");
/*exo 9*/
/*
{

srand(time(0));/*pour changer la valeur de random*/
/*
int nbr=rand()%100+1;
int b=0;
printf("%d",nbr);
printf("\n");
int a;
*/
/*
do{

   printf("taper un numbre : ");
   scanf("%d",&a);
   b++;
   if(a<nbr){
   printf("saisir un number plus grand que %d !! \n",a);
   }
   else
   printf("saisir un number plu petit que %d ! \n",a);

}

while(a != nbr);

printf("passes : %d \n",b);
}
*/
/*..............................*/

/*exo 1 table*/

{
int i;
int b=1;
int t[30]={0};

for(i=0;i<=40;i++){ /*negative number a la qd i>29*/
 t[i] = b ;
printf("t[%d]=%d\n",i,t[i]);
b = b * 2;
}

}
/*........................*/


