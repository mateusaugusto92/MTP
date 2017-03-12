#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main () {
    int a, b, c, soma;
    srand(time(0));
    a=rand()%6+1;
    b= rand()%6+1;
    c=rand()%6+1;
   soma=a+b+c;
   if(soma==7 || soma==11)
    printf("VOCE GANHOU!");
    else
    printf ("VOCE PERDEU!");
return 0;
}
