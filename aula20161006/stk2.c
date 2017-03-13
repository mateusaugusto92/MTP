#include <stdio.h>
#include <math.h>
#define N 5
float media_arit(float vetor[]);
float desvio_amostra (float vetor [], float media);
float desvio_pop (float vetor [], float media);
int main (){
	float vetor[N], media;
	int i;
	printf("Digite 5 numeros: ");
	for (i=0;i<N;i++)
	scanf("%f", &vetor[i]);
	media=media_arit(vetor);
	printf("A media e' %g", media);
	printf("O desvio subpopulacional e' %g e o desvio populacional e' %g", desvio_amostra(vetor, media), desvio_pop(vetor,media));
	return 0;
}
float media_arit(float vetor[]){
	float soma=0, media;
	int i;
	for (i=0;i<N;i++)
	soma=soma+vetor[i];
	media=soma/N;
	return media;
}
float desvio_amostra (float vetor [], float media)
{
	float desvio_amo, somatorio=0;
	int i;
	for (i=0;i<N;i++)
	somatorio=somatorio+pow((vetor[i]-media),2);
	desvio_amo=sqrt(somatorio/(N-1));
	return desvio_amo;
}
float desvio_pop (float vetor [], float media)
{
	float desvio_pop, somatorio=0;
	int i;
	for (i=0;i<N;i++)
	somatorio=somatorio+pow((vetor[i]-media),2);
	desvio_pop=sqrt(somatorio/(N));
	return desvio_pop;
}
