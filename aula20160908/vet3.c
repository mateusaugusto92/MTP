#include <stdio.h>
int main(){
    int vetor[10], i, soma=0, produto=1;
    for(i=0;i<10;i++){
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
    soma=soma+vetor[i];
    produto=produto*vetor[i];
    }
    printf("A soma e' %d e o produto e' %d", soma, produto);

return 0;}
