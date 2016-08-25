#include <stdio.h>
int main(){
    int numero, i;
    printf ("entre com um numero:");
    scanf("%d", &numero);
    for(i = 2; i < numero; i++)
    {
        if (numero%i == 0){
            printf ("nao e primo\n");
            break;
        }
    }
    if (i == numero) printf ("numero Primo\n");
return 0;
}
