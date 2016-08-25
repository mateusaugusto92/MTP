#include <stdio.h>
#include <time.h>
int main(){
    srand(time(0));
    int numero, resultado;
    printf("digite um numero\n");
    scanf("%d", & numero);
    resultado = numero + rand()%2;
    if
    (resultado % 2 == 0) printf("numero par\n");
    else printf("numero impar\n");
return 0;
}
