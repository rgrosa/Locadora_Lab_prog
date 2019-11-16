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
	int i,j,id,idcl,idfl,ver;
	char txc[10];

loadLocacao();
loadFilmes();
	system("@cls||clear");

	loadClientes();	

	printf("==================================================\n");
	printf("BEM VINDOS A LOCADORA 9/10 PORQUE NEM TUDO É PERFEITO\n");
	printf("   A \n");
	printf("  *** \n");
	printf(" ***** \n");
	printf("******* \n");
	printf("   |\n");
	printf("\n");
			
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

						
					
						
						system("@cls||clear");						printf("==================================================\n");
						printf("Cliente cadastrado com sucesso.\n");
						break;
						case 2:
						system("@cls||clear");
						while(verif != 99){
						verif = 0;
						
						printf("==================================================\n");
						printf("1 - Informar o id do cliente a ser editado;\n");
						printf("2 - Pesquisar o nome do cliente a ser editado;\n");
						printf("99 - Voltar;\n");
						printf("==================================================\n");
						scanf("%d", &verif);
					switch(verif){
							case 1:
						system("@cls||clear");
						printf("Digite o numero do id do cliente: ");
						scanf("%d", &id);
						editC(id);


							break;
							case 2:
							system("@cls||clear");
							j=0;
								printf("Digite para a busca: ");
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
						system("@cls||clear");
						printf("Digite para a busca: ");
						scanf("%s", txc);
						buscaC(txc);
						break;
						case 4:

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
					system("@cls||clear");				printf("==================================================\n");
					printf("Filme cadastrado com sucesso.\n");

}else{

}
}

						break;
						case 2:
						system("@cls||clear");
						while(verif != 99){
						verif = 0;
						
						printf("==================================================\n");
						printf("1 - Informar o id do filme a ser editado;\n");
						printf("2 - Pesquisar o nome do filme a ser editado;\n");
						printf("99 - Voltar;\n");
						printf("==================================================\n");
						scanf("%d", &verif);
					switch(verif){
							case 1:
						system("@cls||clear");
						printf("Digite o numero do id do filme: ");
						scanf("%d", &id);
						editF(id);


							break;
							case 2:
							system("@cls||clear");
							j=0;
								printf("Digite para a busca: ");
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
						printf("Digite para a busca: ");
						scanf("%s", txc);
						buscaF(txc);
						break;
						case 4:
						system("@cls||clear");
for(i=0; i<100;i++){

if (fl[i].fil_id!=0){


								printf("==================================================\n");
							printf("FILME %s", fl[i].fil_nome);
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
							


verif = 0;	

						while(verif != 99){
						
						
						printf("==================================================\n");
						printf("1 - Informar o id do cliente que irá realizar a Locação;\n");
						printf("2 - Pesquisar o id do cliente pelo seu nome para realizar a locação;\n");
						printf("99 - Voltar;\n");
						printf("==================================================\n");
						scanf("%d", &verif);
					switch(verif){
							case 1:
						system("@cls||clear");
						printf("Digite o numero do id do cliente: ");
						scanf("%d", &idcl);
						 mostraC(idcl);
						 
						 ver=dataCompra(idcl);
						 if(ver==1){
						 
						 verif=99;
						 
						 }

if (cl[idcl].cli_id!=0){



						
						while(verif != 99){
						verif = 0;
					
						printf("==================================================\n");
						printf("1 - Informar o id do filme a ser locado;\n");
						printf("2 - Pesquisar id do filme pelo seu nome ;\n");
						printf("99 - Voltar;\n");
						printf("==================================================\n");
						scanf("%d", &verif);
					switch(verif){
							case 1:
						system("@cls||clear");
						printf("Digite o numero do id do filme: ");
						scanf("%d", &idfl);
						exibeF(idfl);
if(fl[idfl].fil_qtd_disponivel-1<0){
	

printf("Filme indisponivel no momento!");

}else{
				locacaoCliente(idcl, idfl);
		
						
						printf("==================================================\n");
						printf("1 - Para confirmar a locação;\n");
						printf("2 - Para adicionar mais filmes a locação;\n");
						printf("99 - Cancelar;\n");
						printf("==================================================\n");
						scanf("%d", &verif);
					switch(verif){
							case 1:
							printf("Filme Locado com Sucesso!");
							fl[idfl].fil_qtd_disponivel--;


							writeLocacao();
			verif=99;
						
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








							break;
							case 2:
							system("@cls||clear");
							j=0;
								printf("Digite para a busca: ");
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
}









							break;
							case 2:
							system("@cls||clear");
							j=0;
								printf("Digite para a busca: ");
						scanf("%s", txc);
					
						
						
						
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
					
					
					
					}}







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








