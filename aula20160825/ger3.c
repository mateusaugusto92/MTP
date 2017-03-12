#include <stdio.h>
int main(){

    int numero, i, soma=0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i=1;i<=numero/2;i++)
        if (numero%i==0)
        soma=soma+i;
    if(soma==numero)
        printf("O numero e' perfeito!");
    else
        printf("O numero nao e perfeito");
return 0;
}
