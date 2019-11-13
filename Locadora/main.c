#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "funcs.h"

void main(){
	int verif = 0;
	char val;
loadFilmes();
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
		system("@cls||clear");
		switch(verif){
			case 1:
				while(verif != 99){
					printf("==================================================\n");
					printf("Escolha uma opção:\n");
					printf("1 - Cadastrar cliente;\n");
					printf("2 - Editar cliente(TESTE IMPRIMI);\n");
					printf("99 - Voltar;\n");
					printf("==================================================\n");
					scanf("%d", &verif);
					switch(verif){
						case 1:
					
					
						
						
						printf("==================================================\n");
						printf("Cliente cadastrado com sucesso.\n");
						break;
						case 2:

						

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
					printf("Digite o nome do filme:");
				   		fflush(stdin);
				 		getchar();
							fgets(fl[0].fil_nome, 40, stdin);
						system("@cls||clear");
				
					printf("Digite a sinopse do filme:");
				   		fflush(stdin);
				 		getchar();
							fgets(fl[0].fil_sinopses, 40, stdin);
printf("Digite o ID do filme");
scanf("%d",&fl[0].fil_id);
							
					writeFilmes();
						






						printf("==================================================\n");
						printf("Filme cadastrado com sucesso.\n");
						break;
						case 2:
						system("@cls||clear");

						break;
						case 3:
						system("@cls||clear");

						break;
						case 4:
						system("@cls||clear");
printf(" %s", fl[0].fil_nome);
printf(" %s", fl[0].fil_sinopses);
printf(" %d", fl[0].fil_id);
						
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
