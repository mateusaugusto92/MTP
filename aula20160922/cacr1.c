#include <stdio.h>
int primo (int numero);
int main()
{
	int i, numero, flag=0;
	printf("Entre com um numero: ");
	scanf("%d", &numero);
	for (i=1;i<=numero/2;i++)
	if (primo(i) && primo (numero -i)){
	printf("%d + %d\n", i, numero-i);
	flag=1;
}
	if(!flag)
	printf("nao pode ser expresso");
		return 0;
}
int primo (int numero)
{
	int i, checa=1;

	for(i=2;i<=numero/2;i++)
	if (numero%i==0){
		checa=0;
		break;
	}
	return checa;
}
