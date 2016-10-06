#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void recebevetor(float * vetor, int qtde);
float media (float * vetor, int qtde);
float desviopadrao (float * vetor, int qtde);
int main() {
    int qtde;
    float * vetor;
    printf ("entre com a quantidade de elementos: ");
    scanf ("%d", &qtde);
    vetor = (float *) calloc(qtde, sizeof(float));
    recebevetor (vetor, qtde);
    printf ("media: %g; desvio padrao: %g\n", media(vetor, qtde), desviopadrao (vetor, qtde));
    free (vetor);
return 0;
}
void recebevetor(float * vetor, int qtde){
    int i;
    for (i=0; i < qtde; i++) {
            printf ("entre com o elemento #%d: ", i);
            scanf ("%f", &vetor [i]);
    }
}
float media (float * vetor, int qtde){
    float soma = 0.f;
    int i;
    for(i=0; i < qtde; i++)
        soma += vetor [i];
return soma / qtde;
}
float desviopadrao (float * vetor, int qtde){
    float soma = 0.f;
    float m = media(vetor, qtde);
    int i;
    for(i = 0; i < qtde; i++)
        soma += pow((vetor[i] - m), 2.f);
return sqrt (soma/(qtde - 1));
}
