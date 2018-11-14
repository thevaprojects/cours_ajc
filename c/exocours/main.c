#include <stdio.h>
#include <stdlib.h>


int c;
int cc[255];


int local(int b, int bb[255])
{
    printf("b : %d \n",&b);
    printf("bb : %d \n",&bb);
}



int main()
{
    int aa[255];
    int a;
    int b;
    int bb[255];
    const int d=8;


    printf("a : %d \n",&a);
    printf("aa: %d \n",&aa);

    local(b,bb);

    printf("c : %d \n",&c);
    printf("cc: %d \n",&cc);

    printf("d : %d \n",&d);

    {
       int G;
       G= 2/0 ;
       printf("%d \n",G);

    }

    return 0;

}



