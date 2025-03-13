#include <stdio.h>

void menu() {
    int opcao_menu, horas, minutos, ap, opcao_itens_higiene, qtd, opcao_itens_cama,opcao_menu_pedido,opcao_bebida,opcao_pizza,opcao_sobremesa,opcao_lanche,opcao_hospedagem,dias;
    char email[50], nome[40], cpf[20];
    
    printf("--------------------------------\n");
    printf("O que deseja?\n");
    printf("[ 1 ] Fazer check-in.\n");
    printf("[ 2 ] Servico de quarto.\n");
    printf("[ 3 ] Fazer pedido.\n");
    printf("[ 4 ] Hospedagem.\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao_menu);
    system("cls");

    switch(opcao_menu) {
        case 1:
            printf("--------------------------------\n");
            printf("Check-in\n\n\n");
            printf("Digite seu nome: ");   
            scanf("%s", nome);
            printf("Digite seu email: ");
            scanf("%s", email);
            printf("Digite seu cpf: ");
            scanf("%s", cpf);
            printf("\nSeu check-in foi concluido!\n");
            break;

        case 2:
            printf("--------------------------------\n");
            printf("Qual servico de quarto deseja?\n");
            printf("[ 1 ] Limpeza de quarto.\n");
            printf("[ 2 ] Itens de higiene.\n");
            printf("[ 3 ] Itens de cama.\n");
            printf("Digite sua opcao: ");
            scanf("%d", &opcao_menu);
            system("cls");
            switch(opcao_menu) {
                case 1:
                    printf("--------------------------------\n");
                    printf("Em qual horario deseja que a limpeza seja realizada (HORAS) (MINUTOS):\n");
                    scanf("%d%d", &horas, &minutos);
                    printf("Digite o numero do seu apartamento: ");
                    scanf("%d", &ap);
                    printf("Foi reservada uma limpeza para o apartamento %d as %d:%d", ap, horas, minutos);
                    break;

                case 2:
                    printf("--------------------------------\n");
                    printf("Qual item de higiene deseja?\n");
                    printf("[ 1 ] Papel higienico.\n");
                    printf("[ 2 ] Sabonete.\n");
                    printf("[ 3 ] Shampoo.\n");
                    printf("[ 4 ] Toalha.\n");
                    printf("Digite sua opcao: ");
                    scanf("%d", &opcao_itens_higiene);
                    system("cls");
                    switch(opcao_itens_higiene) {
                        case 1:
                            printf("--------------------------------\n");
                            printf("Quantos papeis higiênicos deseja?\n");
                            scanf("%d", &qtd);
                            printf("Digite o numero do seu apartamento: ");
                            scanf("%d", &ap);
                            printf("\nSeu pedido sera entregue em breve!\n\n");
                            break;
                        case 2:
                            printf("--------------------------------\n");
                            printf("Quantos sabonetes deseja?\n");
                            scanf("%d", &qtd);
                            printf("Digite o numero do seu apartamento: ");
                            scanf("%d", &ap);
                            printf("\nSeu pedido sera entregue em breve!\n\n");
                            break;
                        case 3:
                            printf("--------------------------------\n");
                            printf("Quantos shampoos deseja?\n");
                            scanf("%d", &qtd);
                            printf("Digite o numero do seu apartamento: ");
                            scanf("%d", &ap);
                            printf("\nSeu pedido sera entregue em breve!\n\n");
                            break;
                        case 4:
                            printf("--------------------------------\n");
                            printf("Quantas toalhas deseja?\n");
                            scanf("%d", &qtd);
                            printf("Digite o numero do seu apartamento: ");
                            scanf("%d", &ap);
                            printf("\nSeu pedido sera entregue em breve!\n\n");
                            break;
                        default:
                            printf("Opcao invalida. Voltando ao menu.\n");
                            return;
                    }
                    break;

                case 3:
                    printf("--------------------------------\n");
                    printf("Qual item de cama deseja?\n");
                    printf("[ 1 ] Cobertor.\n");
                    printf("[ 2 ] Lencol.\n");
                    printf("[ 3 ] Travesseiro.\n");
                    printf("Digite sua opcao: ");
                    scanf("%d", &opcao_itens_cama);
                    system("cls");
                    switch(opcao_itens_cama) {
                        case 1:
                            printf("--------------------------------\n");
                            printf("Quantos cobertores deseja?\n");
                            scanf("%d", &qtd);
                            printf("Digite o numero do seu apartamento: ");
                            scanf("%d", &ap);
                            printf("\nSeu pedido sera entregue em breve!\n\n");
                            break;
                        case 2:
                            printf("--------------------------------\n");
                            printf("Quantos lencois deseja?\n");
                            scanf("%d", &qtd);
                            printf("Digite o numero do seu apartamento: ");
                            scanf("%d", &ap);
                            printf("\nSeu pedido sera entregue em breve!\n\n");
                            break;
                        case 3:
                            printf("--------------------------------\n");
                            printf("Quantos travesseiros deseja?\n");
                            scanf("%d", &qtd);
                            printf("Digite o numero do seu apartamento: ");
                            scanf("%d", &ap);
                            printf("\nSeu pedido sera entregue em breve!\n\n");
                            break;
                        default:
                            printf("Opcaoo invalida. Voltando ao menu.\n");
                            return;
                    }
                    break;
                default:
                    printf("Opcao invalida. Voltando ao menu.\n");
                    return; 
            }
            break;
        case 3:
        	printf("--------------------------------\n");
            printf("CARDAPIO\n");
            printf("--------------------------------\n");
            printf("[ 1 ] Bebidas.\n");
            printf("[ 2 ] Pizzas.\n");
            printf("[ 3 ] Lanches.\n");
            printf("[ 4 ] Sobremesas.\n");
            printf("Digite sua opcao: ");
            scanf("%d", &opcao_menu_pedido);
            system("cls");
            switch(opcao_menu_pedido){
            	case 1:
                printf("--------------------------------\n");
                printf("Escolha uma bebida:\n");
                printf("[ 1 ] Guarana 2L - R$ 9,00.\n");
                printf("[ 2 ] Suco 300ml - R$ 6,00.\n");
                printf("[ 3 ] Agua 550ml- R$ 3,00.\n");
                printf("Digite sua opcao: ");
                scanf("%d", &opcao_bebida);
                switch(opcao_bebida){
                    case 1:
                        printf("--------------------------------\n");
                        printf("Quantos guaranas deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 9,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break;
                    case 2:
                        printf("--------------------------------\n");
                        printf("Quantos sucos deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 6,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break;
                    case 3:
                       	printf("--------------------------------\n");
                        printf("Quantas aguas deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 3,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break; 
                    default:
                        printf("Opcao invalida. Voltando ao menu.\n");
                        return;
                }
            	case 2:
            	printf("--------------------------------\n");
                printf("Escolha uma pizza:\n");
                printf("[ 1 ] Frango com catupiry - R$ 50,00.\n");
                printf("[ 2 ] Calabresa - R$ 50,00.\n");
                printf("[ 3 ] Portuguesa - R$ 40,00.\n");
                printf("[ 4 ] Xuxa - R$ 40,00");
                printf("Digite sua opcao: ");
                scanf("%d", &opcao_pizza);
                system("cls");
                switch(opcao_pizza){
                	case 1:
                		printf("--------------------------------\n");
                        printf("Quantas pizzas de frango com catupiry deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 50,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break;
                    case 2:
                    	printf("--------------------------------\n");
                        printf("Quantas pizzas de calabresa deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 50,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break;
                    case 3:
                    	printf("--------------------------------\n");
                        printf("Quantas pizzas portuguesa deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 40,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                    case 4:
                    	printf("--------------------------------\n");
                        printf("Quantas pizzas xuxa deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 40,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                    default:
                        printf("Opcao invalida. Voltando ao menu.\n");
                        return;
                }
                case 3:
				printf("--------------------------------\n");
                printf("Escolha um lanche:\n");
                printf("[ 1 ] X-Burguer - R$ 20,00.\n");
                printf("[ 2 ] X-Salada - R$ 24,00.\n");
                printf("[ 3 ] X-Egg-Bacon - R$ 30,00.\n");
                printf("[ 4 ] X-Tudo - R$ 36,00");
                printf("Digite sua opcao: ");
                scanf("%d", &opcao_lanche);
                system("cls");
				switch(opcao_lanche){
                    case 1:
                        printf("--------------------------------\n");
                        printf("Quantos X-Burguer deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 20,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break;
                    case 2:
                        printf("--------------------------------\n");
                        printf("Quantos X-Salada deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 24,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break;
                    case 3:
                       	printf("--------------------------------\n");
                        printf("Quantas X-Egg-Bacon deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 30,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break; 
                    case 4:
                       	printf("--------------------------------\n");
                        printf("Quantas X-Tudo deseja?\n");
                        scanf("%d", &qtd);
                        printf("Digite o numero do seu apartamento: ");
                        scanf("%d", &ap);
                        printf("O valor do seu pedido sera de R$%.2f.",qtd * 36,00);
                        printf("\nSeu pedido sera entregue em breve!\n\n");
                        break; 
                    default:
                        printf("Opcao invalida. Voltando ao menu.\n");
                        return;
                }
                case 4:
                printf("--------------------------------\n");
    			printf("Escolha uma sobremesa:\n");
    			printf("[ 1 ] Pudim - R$ 20,00.\n");
    			printf("[ 2 ] Sorvete - R$ 7,00.\n");
    			printf("[ 3 ] Banoffee - R$ 10,00.\n");
    			printf("[ 4 ] Mousse de chocolate - R$ 8,00.\n");
    			printf("Digite sua opcao: ");
    			scanf("%d", &opcao_sobremesa);
    			system("cls");
    			switch(opcao_sobremesa){
    				case 1:
            			printf("--------------------------------\n");
            			printf("Quantos pudins deseja?\n");
            			scanf("%d", &qtd);
            			printf("Digite o numero do seu apartamento: ");
            			scanf("%d", &ap);
            			printf("O valor do seu pedido sera de R$%.2f.", qtd * 20.00);
            			printf("\nSeu pedido sera entregue em breve!\n\n");
            			break;
        			case 2:
           				printf("--------------------------------\n");
            			printf("Quantos sorvetes deseja?\n");
            			scanf("%d", &qtd);
            			printf("Digite o numero do seu apartamento: ");
            			scanf("%d", &ap);
            			printf("O valor do seu pedido sera de R$%.2f.", qtd * 7.00);
            			printf("\nSeu pedido sera entregue em breve!\n\n");
            			break;
        			case 3:
            			printf("--------------------------------\n");
            			printf("Quantos banoffees deseja?\n");
            			scanf("%d", &qtd);
           				printf("Digite o numero do seu apartamento: ");
            			scanf("%d", &ap);
            			printf("O valor do seu pedido sera de R$%.2f.", qtd * 10.00);
            			printf("\nSeu pedido sera entregue em breve!\n\n");
            			break;
       				case 4:
            			printf("--------------------------------\n");
           				printf("Quantos mousses de chocolate deseja?\n");
            			scanf("%d", &qtd);
            			printf("Digite o numero do seu apartamento: ");
            			scanf("%d", &ap);
            			printf("O valor do seu pedido sera de R$%.2f.", qtd * 8.00);
            			printf("\nSeu pedido sera entregue em breve!\n\n");
           				break;
        			default:
            			printf("Opcao invalida. Voltando ao menu.\n");
            			return;
    			}
    			default:
    				printf("Opcao invalida. Voltando ao menu.\n");
                    return;
            }
			case 4:
				printf("--------------------------------\n");
            	printf("Qual quarto deseja?\n");
            	printf("[ 1 ] Quarto Grande - R$600,00 p/dia.\n");
            	printf("[ 2 ] Quarto Casal - R$480,00 p/dia.\n");
            	printf("[ 3 ] Quarto Individual - R$300,00 p/dia.\n");
            	printf("Digite sua opcao: ");
            	scanf("%d", &opcao_hospedagem);
           		printf("Quantos dias deseja se hospedar?\n");
            	scanf("%d",&dias);
            	system("cls");
            	switch(opcao_hospedagem){
            		case 1:
            			printf("O valor sera de R$%.2f.",dias*600,00);
            			break;
            		case 2:
            			printf("O valor sera de R$%.2f.",dias*480,00);
            			break;
            		case 3:
            			printf("O valor sera de R$%.2f.",dias*300,00);
            			break;
            		default:
    					printf("Opcao invalida. Voltando ao menu.\n");
                    	return;
            		}  
        	default:
            printf("Opcao invalida. Voltando ao menu.\n");
            return;
    }
}

int main() {
    int while_saida;
    while_saida = 1;
    printf("Bem-vindo ao nosso hotel.\n\n");
    while(while_saida != 0) {
        menu();
        printf("\n--------------------------------\n");
        printf("Deseja voltar ao menu?\n");
        printf("[ 1 ] Sim\n");
        printf("[ 0 ] Nao (SAIR)\n");
        scanf("%d", &while_saida);
        if (while_saida == 0) {
            printf("Concluido.\nTenha uma otima hospedagem!\n");
        }
    }
    return 0;
}