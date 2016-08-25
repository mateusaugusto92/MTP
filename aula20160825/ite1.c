#include <stdio.h>
int main(){
    int numero, fatorial, i;
    printf("Digite um numero.\n");
    scanf("%d", & numero);
    fatorial = 1;
    for (i = 1; i <= numero; i = i + 1)
        fatorial = fatorial * i;
    printf ("O fatorial de %d e: %d",  numero,  fatorial);
return 0;
}
