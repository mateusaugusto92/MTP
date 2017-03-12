#include <stdio.h>
#include <stdlib.h>
int main () {
    float num1, num2, soma;
    printf("Digite dois numero:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
   soma=num1+num2;
    printf("%p: %g, %p: %g\n",&num1,num1, &num2, num2);
     printf("%p, o resultado da soma e': %g\n", &soma, soma);

return 0;}
