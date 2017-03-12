#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main (){
    srand(time (0));
    int numero,i, max=0, min=9;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);
    int vet[1000];
    for (i=0;i<numero;i++){
        vet[i]=rand()%10;
        if (vet[i]>max)
            max=vet[i];
        if(vet[i]<min)
            min=vet[i];
    }
        printf("O maximo e' %d e o minimo e %d", max, min);
return 0;}
