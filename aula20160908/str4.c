#include <stdio.h>
int main()
{
	char frase[256];
    printf("Digite uma frase: ");
	fgets(frase,256,stdin);
	int i;
	for(i=0; frase[i]; i++)
	{
    if(frase[i]>=65 && frase[i]<=77 || frase[i]>=97 && frase[i]<109)
     frase[i]=frase[i]+13;
     else
     frase[i]=frase[i]-13;
	}
	printf("%s", frase);
	return 0;
}
