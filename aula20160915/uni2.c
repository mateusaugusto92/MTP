#include <stdio.h>
union unir {
    int i;
    float f;
};
int main () {
    union unir numero;
    char op;
    do {
        printf("Para int, digite i. Para float, digite f.");
        scanf("%c",&op);
        fflush(stdin);
    }
    while(op != 'I' && op != 'i' && op != 'f' && op!= 'F');
    if(op == 'i' || op == 'I') {
        printf("Digite o int: ");
        scanf("%d", &numero.i);
        printf("Float: %e\n",numero.f);
    }
    else {
        printf("Digite o float: ");
        scanf("%f", &numero.f);
        printf("Int: %d\n",numero.i);
    }
    return 0;
}
