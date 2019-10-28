#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>


	struct Cliente{
		int cli_id, cli_idade, cli_cpf;
		char cli_nome[100], cli_endereco[500];
	};

	struct Filme{
		int fil_id, fil_classificacao, fil_qtd_disponivel;
		char fil_nome[500], fil_genero[100], fil_sinopses[3000];
	};

	struct Locacao{
		int loc_id, loc_cliId, loc_filId;
		struct tm loc_data_locacao;
	};
void main(){
	int verif = 0;

	system("@cls||clear");
	printf("==================================================\n");
	printf("BEM VINDOS A LOCADORA 9/10 PORQUE NEM TUDO É PERFEITO\n");
	printf("   A \n");
	printf("  *** \n");
	printf(" *o*o* \n");
	printf("*o***o* \n");
	printf("   |\n");
	printf("Feliz Natal e um ótimo ano novo!! Aceitamos nota de presente ou um vale refeição.\n");
		
	while(verif != 99){
		printf("==================================================\n");
		printf("Escolha uma opção:\n");
		printf("1 - Clientes;\n");
		printf("2 - Filmes;\n");
		printf("3 - Locação;\n");
		printf("99 - Sair;\n");
		printf("==================================================\n");
		scanf("%d", &verif);
		switch(verif){
			case 1:
				while(verif != 99){
					system("@cls||clear");
					printf("==================================================\n");
					printf("Escolha uma opção:\n");
					printf("1 - Cadastrar cliente;\n");
					printf("2 - Editar cliente;\n");
					printf("99 - Voltar;\n");
					printf("==================================================\n");
					scanf("%d", &verif);
					switch(verif){
						case 1:
						system("@cls||clear");

						break;
						case 2:
						system("@cls||clear");

						break;
						case 99:
							system("@cls||clear");
							printf("==================================================\n");
							printf("Voltando...\n");
							
						break;
						default:
							system("@cls||clear");
							printf("==================================================\n");
							printf("Opção inválida, digite novamente!\n");
							
						break;
					}
				}
				verif = 0;
			break;
			case 2:
				while(verif != 99){
					system("@cls||clear");
					printf("==================================================\n");
					printf("Escolha uma opção:\n");
					printf("1 - Cadastrar filme;\n");
					printf("2 - Editar filme;\n");
					printf("3 - Procurar filme;\n");
					printf("4 - Consultar informações;\n");
					printf("99 - Voltar;\n");
					printf("==================================================\n");
					scanf("%d", &verif);
					switch(verif){
						case 1:
						system("@cls||clear");

						break;
						case 2:
						system("@cls||clear");

						break;
						case 3:
						system("@cls||clear");

						break;
						case 4:
						system("@cls||clear");

						break;
						case 99:
							system("@cls||clear");
							printf("==================================================\n");
							printf("Voltando...\n");	
							
						break;
						default:
							system("@cls||clear");
							printf("==================================================\n");
							printf("Opção inválida, digite novamente!\n");
							
						break;
					}
				}
				verif = 0;
			break;
			case 3:
				while(verif != 99){
					system("@cls||clear");
					printf("==================================================\n");
					printf("Escolha uma opção:\n");
					printf("1 - Locar filme;\n");
					printf("2 - Gerar relatório;\n");
					printf("99 - Voltar;\n");
					printf("==================================================\n");
					scanf("%d", &verif);
					switch(verif){
						case 1:
							
						break;
						case 2:
							system("@cls||clear");
							printf("==================================================\n");
							printf("Gerar PDF?\n");
							printf("1 - Sim;\n");
							printf("2 - Não;\n");
							printf("==================================================\n");
							scanf("%d", &verif);
							if(verif == 1){
								
							}
						break;
						case 99:
							system("@cls||clear");
							printf("==================================================\n");
							printf("Voltando...\n");
							
						break;
						default:
							system("@cls||clear");
							printf("==================================================\n");
							printf("Opção inválida, digite novamente!\n");
							
						break;
					}
				}
				verif = 0;
			break;
			case 99:
				system("@cls||clear");
				printf("==================================================\n");
				printf("Saindo...\n");
				printf("==================================================\n");
			break;
			default:
				system("@cls||clear");
				printf("==================================================\n");
				printf("Opção inválida, digite novamente!\n");
				
			break;
		}
	}
}
