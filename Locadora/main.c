#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

#include "funcs.h"

void main(){
	int aux, verif = 0, sizeCli = 0 /*Colocar número de clientes atuais aqui*/, sizeFil = 0 /*Colocar número de filmes atuais aqui*/, sizeLoc = 0 /*Colocar número de locações atuais aqui*/;
	struct Cliente ListaClientes[100];
	struct Filme ListaFilmes[100];
	struct Locacao ListaLocacao[100];
	char val;
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
					printf("2 - Editar cliente;\n");
					printf("99 - Voltar;\n");
					printf("==================================================\n");
					scanf("%d", &verif);
					switch(verif){
						case 1:
							system("@cls||clear");
							printf("Digite o nome do cliente:\n");
							scanf("%c", &val);
							gets(ListaClientes[sizeCli].cli_nome);
							system("@cls||clear");
							printf("Digite o CPF (Somente números):\n");
							scanf("%ld", &ListaClientes[sizeCli].cli_cpf);
							system("@cls||clear");
							printf("Digite a idade:\n");
							scanf("%d", &ListaClientes[sizeCli].cli_idade);
							system("@cls||clear");
							printf("Digite o endereço:\n");
							scanf("%c", &val);
							gets(ListaClientes[sizeCli].cli_endereco);
							ListaClientes[sizeCli].cli_id = sizeCli;
							sizeCli+=1;
							system("@cls||clear");
							printf("==================================================\n");
							printf("Cliente cadastrado com sucesso.\n");
						break;
						case 2:
							system("@cls||clear");
							printf("Digite o código do cliente à editar:\n");
							scanf("%d", &aux);
							system("@cls||clear");
							printf("Digite o novo nome do cliente | Atual: %s:\n", ListaClientes[aux].cli_nome);
							scanf("%c", &val);
							gets(ListaClientes[aux].cli_nome);
							system("@cls||clear");
							printf("Digite o novo CPF (Somente números) | Atual: %ld:\n", ListaClientes[aux].cli_cpf);
							scanf("%ld", &ListaClientes[aux].cli_cpf);
							system("@cls||clear");
							printf("Digite a nova idade | Atual: %d:\n", ListaClientes[aux].cli_idade);
							scanf("%d", &ListaClientes[aux].cli_idade);
							system("@cls||clear");
							printf("Digite o novo endereço | Atual: %s:\n", ListaClientes[aux].cli_endereco);
							scanf("%c", &val);
							gets(ListaClientes[aux].cli_endereco);
							printf("==================================================\n");
							printf("Cliente alterado com sucesso.\n");
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
							printf("Digite o nome do filme:\n");
							scanf("%c", &val);
							gets(ListaFilmes[sizeFil].fil_nome);
							system("@cls||clear");
							printf("Digite a classificação:\n");
							scanf("%d", &ListaFilmes[sizeFil].fil_classificacao);
							system("@cls||clear");
							printf("Digite o gênero:\n");
							scanf("%c", &val);
							gets(ListaFilmes[sizeFil].fil_genero);
							system("@cls||clear");
							printf("Digite a sinopses:\n");
							scanf("%c", &val);
							gets(ListaFilmes[sizeFil].fil_sinopses);
							system("@cls||clear");
							printf("Digite a quantidade disponível:\n");
							scanf("%d", &ListaFilmes[sizeFil].fil_qtd_disponivel);
							ListaFilmes[sizeFil].fil_id = sizeFil;
							sizeFil+=1;
							system("@cls||clear");
							printf("==================================================\n");
							printf("Filme cadastrado com sucesso.\n");
						break;
						case 2:
							system("@cls||clear");
							printf("Digite o código do filme à editar:\n");
							scanf("%d", &aux);
							system("@cls||clear");
							printf("Digite o novo nome do filme | Atual: %s:\n", ListaFilmes[aux].fil_nome);
							scanf("%c", &val);
							gets(ListaFilmes[aux].fil_nome);
							system("@cls||clear");
							printf("Digite a nova classificação | Atual: %d:\n", ListaFilmes[aux].fil_classificacao);
							scanf("%d", &ListaFilmes[aux].fil_classificacao);
							system("@cls||clear");
							printf("Digite o novo gênero | Atual: %s:\n", (ListaFilmes[aux].fil_genero));
							scanf("%c", &val);
							gets(ListaFilmes[aux].fil_genero);
							system("@cls||clear");
							printf("Digite a nova sinopses | Atual: %s:\n", ListaFilmes[aux].fil_sinopses);
							scanf("%c", &val);
							gets(ListaFilmes[aux].fil_sinopses);
							system("@cls||clear");
							printf("Digite a nova quantidade disponível | Atual: %d:\n", ListaFilmes[aux].fil_qtd_disponivel);
							scanf("%d", &ListaFilmes[aux].fil_qtd_disponivel);
							system("@cls||clear");
							printf("==================================================\n");
							printf("Filme alterado com sucesso.\n");
						break;
						case 3:
							system("@cls||clear");

						break;
						case 4:
							system("@cls||clear");
							printf("Digite o código do filme que deseja consultar:\n");
							scanf("%d", &aux);
							system("@cls||clear");
							printf("ID: %d\n", ListaFilmes[aux].fil_id);
							printf("Nome: %s\n", ListaFilmes[aux].fil_nome);
							printf("Classificação: %d\n", ListaFilmes[aux].fil_classificacao);
							printf("Gênero: %s\n", ListaFilmes[aux].fil_genero);
							printf("Sinopse: %s\n", ListaFilmes[aux].fil_sinopses);
							printf("Quantidade disponível: %d\n", ListaFilmes[aux].fil_qtd_disponivel);
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
					printf("==================================================\n");
					printf("Escolha uma opção:\n");
					printf("1 - Locar filme;\n");
					printf("2 - Gerar relatório;\n");
					printf("99 - Voltar;\n");
					printf("==================================================\n");
					scanf("%d", &verif);
					switch(verif){
						case 1:
							system("@cls||clear");
							printf("Digite o código do cliente:\n");
							scanf("%d", &aux);
							ListaLocacao[sizeLoc].loc_cliId = ListaClientes[aux].cli_id;
							system("@cls||clear");
							printf("Digite o código do filme:\n");
							scanf("%d", &aux);
							ListaLocacao[sizeLoc].loc_filId = ListaFilmes[aux].fil_id;
							ListaFilmes[aux].fil_qtd_disponivel-=1;
							ListaLocacao[sizeLoc].loc_id = sizeLoc;
							sizeLoc+=1;
							system("@cls||clear");
							printf("==================================================\n");
							printf("Locação realizada com sucesso!\n");
						break;
						case 2:
							system("@cls||clear");
							for(int i = 0; i<sizeLoc; i++){
								printf("==================================================\n");
								printf("Locação número: %d\n", i);
								printf("Nome do cliente: %s\n", ListaClientes[ListaLocacao[i].loc_cliId].cli_nome);
								printf("Nome do filme: %s\n", ListaFilmes[ListaLocacao[i].loc_filId].fil_nome);
							}
							printf("==================================================\n");
							printf("Gerar PDF?\n");
							printf("1 - Sim;\n");
							printf("2 - Não;\n");
							printf("==================================================\n");
							scanf("%d", &verif);
							if(verif == 1){
								//Aqui gera o PDF
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
