#include <stdio.h>
#include <stdlib.h>
int main()
{
	double *vetor= NULL, numero, soma=0, maior=-999999, menor=9999999999;
	int i, tamanho=0, opcao;
	do
	{
	printf("Digite um numero:\n");
	scanf("%lf", &numero);
	if (vetor==NULL)
		vetor=(double*)malloc(sizeof(double));
	else
		vetor=(double*)realloc(vetor, sizeof(vetor)+8); //	vetor=(double*)realloc(vetor, tamanho*sizeof(double)+sizeof(double)) ou vetor=realloc(vetor, (1+tamanho)*sizeof(double))
	vetor[tamanho]=numero;
	tamanho++;
	soma=soma+numero;
	if(numero<menor)
		menor=numero;
	if(numero>maior)
		maior=numero;
	printf ("O menor valor e' %g e o maior e' %g\n", menor, maior);
	printf("A media e' %g \n", soma/tamanho);
	printf("Para sair digite 0 e para continuar aperte qualquer tecla diferente de zero.\n");
	scanf("%d", &opcao);
}while(opcao!=0);
free(vetor);
return 0;
}
