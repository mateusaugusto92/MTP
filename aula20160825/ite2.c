#include <stdio.h>
int main ()
{
    int b, p, resultado, i;
    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Digite a potencia: ");
    scanf("%d", &p);
    if (p==1)
    printf("o resultado e:%d", b);
    if (p==0)
    printf("o resultado e: 1 ");
    else
      {
            i=2;
            resultado=b;
            do {
            resultado=resultado*b;
            i++;
            }while (i<=p);
printf("o resultado e: %d ", resultado);
      }
return 0;
}
