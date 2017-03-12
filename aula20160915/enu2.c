#include <stdio.h>

enum mes
{
	janeiro=1, fevereiro=2,marco=3,abril=4,maio=5,junho=6,julho=7,agosto=8,setembro=9,outubro=10,novembro=11,
	dezembro=12
}data;

int main()
{

	printf("Insira o numero (1 a 12) do mes de seu nascimento:\n");
	scanf("%d", &data);
	switch(data)
	{
	case janeiro:
		printf("Voce nasceu em: (%d) Janeiro",data);
        break;
	case fevereiro:
		printf("Voce nasceu em: (%d) Fevereiro", data);
	break;
		case marco:
		printf("Voce nasceu em: (%d) Marco",data);
	break;
	case abril:
		printf("Voce nasceu em: (%d) Abril",data);
	break;
		case maio:
		printf("Voce nasceu em: (%d) Maio",data);
	break;
		case junho:
		printf("Voce nasceu em: (%d) Junho",data);
	break;
		case julho:
		printf("Voce nasceu em: (%d) Julho",data);
	break;
		case agosto:
		printf("Voce nasceu em: (%d) Agosto",data);
	break;
		case setembro:
		printf("Voce nasceu em: (%d)Setembro",data);
	break;
		case outubro:
		printf("Voce nasceu em: (%d) Outubro",data);
	break;
		case novembro:
		printf("Voce nasceu em: (%d) Novembro",data);
	break;
		case dezembro:
		printf("Voce nasceu em: (%d)  Dezembro",data);
	break;
    }
    return 0;
}
