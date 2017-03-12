#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
    int x, a, cont=0;
          printf("Escolha um numero de 0 a 99: ");
          scanf("%d", &x);
        a=rand()%100;
          cont++;
  if (x==a)
  {


      printf("Acertou!!!");
      printf("Numero de tentativas: %d" , cont);
  }
  else{

          do
          {

              system ("cls");
          if(x>a)
          {
            printf("Alto!");
            printf("Tente novamente: ");
          scanf("%d", &x);
          }
          if (x<a)
          {
            printf("Baixo!");
            printf("Tente novamente: ");
          scanf("%d", &x);
          }
          cont++;
        if (x==a)
        {
                printf("Acertou!!!");
                break;
        }
            system ("pause");}while (x!=a);
            printf("Numero de tentativas: %d" , cont);
  }
          return 0;}
