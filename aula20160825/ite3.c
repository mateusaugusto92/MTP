#include <stdio.h>
int main ()
{
	int i, cont=0;
	char palavra[256];
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	for (i=0;palavra[i]!='\0';i++)
	cont++;
	printf("O numero de caracteres e' igual a %d", cont);
	return 0;

}
