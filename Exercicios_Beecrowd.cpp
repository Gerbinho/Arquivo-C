#include <stdio.h>
#include <stdlib.h>

void consumption();
void age_in_days();
void month();

void consumption(){
	int distance;
	float fuel;
	printf("Digite a distancia percorrida (Km):");
	scanf("%d",&distance);
	printf("Digite o combustivel gasto (L):");
	scanf("%f",&fuel);
	printf("Seu veiculo faz %.3f",distance/fuel);
}
void age_in_days(){
	int day,year,month;
	printf("Digite sua idade em dias: ");
	scanf("%d",&day);
	year = day/365;
	day = day%365;
	month = day/30;
	day = day%30;
	printf("%d Ano(s)\n%d Mes(es)\n%d Dia(s)\n",year,month,day);
}
void month(){
	int mes;
	printf("Digite o numero do mes: ");
	scanf("%d",&mes);
	switch(mes){
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("July");
			break;
		case 8:
			printf("August");
			break;
		case 9:
			printf("September");
			break;
		case 10:
			printf("Octuber");
			break;
		case 11:
			printf("November");
			break;
		case 12:
			printf("December");
			break;
		default:
			printf("Nao e um mes valido!");
	}
}
int main(){
	int opc;
	do{
		system("cls");
		printf("--------Exercicios--------\n");
		printf("[ 1 ] Consumo\n");
		printf("[ 2 ] Idade\n");
		printf("[ 3 ] Meses\n");
		printf("[ 0 ] Sair\n");
		printf("Digite opcao: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				consumption();
				break;
		  	case 2:
		  		age_in_days();
		  		break;
		  	case 3:
		  		month();
		  		break;
		  	case 0:
		  		printf("Saindo...\n");
		  		break;
		  	default:
		  		printf("Digite uma opcao valida!\n");
		}
		getchar();
		getchar();
	}while(opc!=0);
	return 0;
}