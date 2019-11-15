#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include "funcs.h"
#include <string.h>
#include <locale.h>
void main(){
	int verif = 0;
	char val;
	int i,j,id;
	char txc[10];


loadFilmes();
	system("@cls||clear");

	loadClientes();	

	printf("==================================================\n");
	printf("BEM VINDOS A LOCADORA 9/10 PORQUE NEM TUDO É PERFEITO\n");
	printf("   A \n");
	printf("  *** \n");
	printf(" *o*o* \n");
	printf("*o***o* \n");
	printf("   |\n");
	printf("\n");
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
					printf("3 - Procurar cliente;\n");
					printf("4 - Consultar informações;\n");
					printf("99 - Voltar;\n");
					printf("==================================================\n");
					scanf("%d", &verif);
					switch(verif){
						case 1:
					
for(i=1; i<100;i++){

if (cl[i].cli_id== 0) {


					printf("Digite o nome do cliente: ");
				   		fflush(stdin);
				 		getchar();
						fgets(cl[i].cli_nome, 40, stdin);
					
					printf("Digite o endereço do cliente: ");
				   		fflush(stdin);
				 		getchar();
						fgets(cl[i].cli_endereco, 80, stdin);
				
						cl[i].cli_id=i;
					printf("Digite CPF do cliente (SOMENTE NUMEROS): ");
						scanf("%ld",&cl[i].cli_cpf);
					printf("Digite a idade do cliente: ");
						scanf("%ld",&cl[i].cli_idade);		
		
						writeClientes();
					i=101;	
						
							}}

						
					
						
						printf("==================================================\n");
						printf("Cliente cadastrado com sucesso.\n");
						break;
						case 2:

								while(verif != 99){
						verif = 0;
						
						printf("==================================================\n");
						printf("Digite 1 para informar o ID do cliente a ser editado\n");
						printf("Digite 2 para pesquisar cliente para iditar\n");
						printf("Digite 99 para voltar\n");
						printf("==================================================\n");
						scanf("%d", &verif);
					switch(verif){
							case 1:
						
						printf("Digite numero do ID do cliente\n");
						scanf("%d", &id);
						editC(id);


							break;
							case 2:
							j=0;
								printf("digite o para busca ");
						scanf("%s", txc);
						j=buscaC(txc);
						if(j!=0){

							editC(j);
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
						

					


						break;
						case 3:
						break;
						case 4:
loadClientes();
for(i=1; i<100;i++){

if (cl[i].cli_id!=0){


								printf("==================================================\n");
							printf("CLIENTE: %s", cl[i].cli_nome);
							printf("ID: %ld\n", cl[i].cli_id);
							printf("CPF: %ld\n", cl[i].cli_cpf);	
							printf("ENDEREÇO: %s", cl[i].cli_endereco);
							printf("IDADE: %ld\n\n", cl[i].cli_idade);				
								printf("==================================================\n");

}}




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
						

for(i=1; i<100;i++){

if (fl[i].fil_id== 0) {


					printf("Digite o nome do filme: ");
				   	fflush(stdin);
				 	getchar();
					fgets(fl[i].fil_nome, 40, stdin);
				
					printf("Digite a sinopse do filme: ");
					fflush(stdin);
				 	getchar();
					fgets(fl[i].fil_sinopses, 1000, stdin);
				
					fl[i].fil_id=i;
					printf("Digite a quantidade disponivel em estoque: ");
					scanf("%d",&fl[i].fil_qtd_disponivel);		
					writeFilmes();
					i=101;
					printf("==================================================\n");
					printf("Filme cadastrado com sucesso.\n");

}else{

}
}

						break;
						case 2:
						while(verif != 99){
						verif = 0;
						
						printf("==================================================\n");
						printf("Digite 1 para informar o ID do filme a ser editado\n");
						printf("Digite 2 para pesquisar um filme para iditar\n");
						printf("Digite 99 para voltar\n");
						printf("==================================================\n");
						scanf("%d", &verif);
					switch(verif){
							case 1:
						
						printf("Digite numero do ID do filme\n");
						scanf("%d", &id);
						editF(id);


							break;
							case 2:
							j=0;
								printf("digite o para busca ");
						scanf("%s", txc);
						j=buscaF(txc);
						if(j!=0){

							editF(j);
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
						

						break;
						case 3:
						system("@cls||clear");
						printf("digite o para busca ");
						scanf("%s", txc);
						buscaF(txc);
						break;
						case 4:
						system("@cls||clear");
for(i=0; i<100;i++){

if (fl[i].fil_id!=0){


								printf("==================================================\n");
							printf("Nome do FILME %s", fl[i].fil_nome);
							printf("ID: %d\n", fl[i].fil_id);
							printf("SINOPSE: %s", fl[i].fil_sinopses);
							printf("Quantidade Disponivel em estoque: %d\n\n", fl[i].fil_qtd_disponivel);				
								printf("==================================================\n");

}}

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
