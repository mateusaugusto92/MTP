#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main (){
char frase[256];
int i,a, flag=0,j;
printf("Digite uma frase: ");
fgets(frase,256,stdin);
a= strlen(frase)-1;
for (i=0;i<=a;i++)
{

if(frase[i]==' ')
    {
        for(j=i; j<a;j++)
    frase[j]=frase[j+1];
    a--;
    }
    frase[i]=toupper(frase[i]);
}
for (i=0;i<=a;i++)
{
    if(frase[i]==frase[a-1])
        a--;
    else
        {
        flag=1;
        break;
        }
}
if(flag)
printf("A palavra NAO e um palindromo!!");
else
    printf("A palavra e um palindromo!!");
return 0;}
