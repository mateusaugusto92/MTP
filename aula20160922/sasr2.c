#include <stdio.h>
void par();
void impar ();
int main()
{
	int x;
	printf("Para visualizar os numeros impares de 1 a 10, digite 1, para os pares 2.\n");
	scanf("%d",&x);
	if (x==1)
	impar();
	if (x==2)
	par();
	else
	printf("Opcao invalida!\n");
	return 0;
}
void par()
{
	int i;
	for (i=1;i<=10;i++)
	if (i%2==0)
	printf("%d\t", i);
}
void impar ()
{
int i;
	for (i=1;i<=10;i++)
	if (i%2!=0)
	printf("%d\t", i);
}
