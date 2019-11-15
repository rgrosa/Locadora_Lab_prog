#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "funcs.h"
    #include <string.h>




void printC(int idc){
 
  
printf("\n\nNome do CLIENTE %s", cl[idc].cli_nome);
printf("ID: %ld\n", cl[idc].cli_id);
printf("CPF: %ld\n\n", cl[idc].cli_cpf);
printf("ENDEREÇO: %s", cl[idc].cli_endereco);



}


int buscaC(char busc[]){



int i, item;
int j=0;

   char *psResultado;

 for(i=0; i<100; i++){
   psResultado = strstr(cl[i].cli_nome, busc);

        if(psResultado!= NULL){

            printf("NOME: %s", cl[i].cli_nome);
            printf("ID: %ld\n\n", cl[i].cli_id);

j++;
 }     else {}}
   if(j==0){printf("\n\nNENHUM ITEM ENCONTRADO\n\n");
   
                         return 0;
   
   }else{printf("\n\nFORAM ENCONTRADOS %d ITEN(S) CORRESPONDENTE(S)\n\n", j);
   
   
   printf("\nDIGITE O ID CORRESPONDENTE A O ITEM PROCURADO\n");
   scanf("%d", &item);
   if(cl[item].cli_id==0){

printf("\nID não encontrado!\n\n");
 return 0;
   }else{

 printC(item);

   }
   
   }
  
                         return item;
}


void printF(int idf){
 

printf("\n\nNome do FILME %s", fl[idf].fil_nome);
printf("ID: %d\n", fl[idf].fil_id);
printf("SINOPSE: %s", fl[idf].fil_sinopses);
printf("Quantidade Disponivel em estoque: %d\n\n", fl[idf].fil_qtd_disponivel);


}



void editC(int idc){

   
  
if (cl[idc].cli_id==0){


    printf("\n\nID INEXISTENTE\n\n");
}
else{



    printf("############EDITAR############\n");

    printf("\n\nNome do CLIENTE %s editar para -> ", cl[idc].cli_nome);
        fflush(stdin);
		getchar();
	    fgets(cl[idc].cli_nome, 40, stdin);

    printf("ENDEREÇO: %s editar para -> ", cl[idc].cli_endereco);
        fflush(stdin);
		getchar();
		fgets(cl[idc].cli_endereco, 40, stdin);

   

    printf("CPF: %ld para -> \n",cl[idc].cli_cpf);
        scanf("%ld",&cl[idc].cli_cpf);

                printf("IDADE: %ld para -> ",cl[idc].cli_idade);
						scanf("%ld",&cl[idc].cli_idade);		
              writeClientes();
}}




void editF(int idf){

   
  
if (fl[idf].fil_id==0){


    printf("\n\nID INEXISTENTE\n\n");
}
else{



    printf("############EDITAR############\n");

    printf("\n\nNome do FILME %s editar para -> ", fl[idf].fil_nome);
        fflush(stdin);
		getchar();
	    fgets(fl[idf].fil_nome, 40, stdin);

    printf("SINOPSE: %s editar para -> ", fl[idf].fil_sinopses);
        fflush(stdin);
		getchar();
		fgets(fl[idf].fil_sinopses, 1000, stdin);

   

    printf("Quantidade Disponivel em estoque: %d para -> \n", fl[idf].fil_qtd_disponivel);
        scanf("%d",&fl[idf].fil_qtd_disponivel);
                
                 writeFilmes();
}}






int buscaF(char busc[]){



int i, item;
int j=0;

   char *psResultado;

 for(i=0; i<100; i++){
   psResultado = strstr(fl[i].fil_nome, busc);

        if(psResultado!= NULL){

            printf("NOME: %s", fl[i].fil_nome);
            printf("ID: %d\n\n", fl[i].fil_id);

j++;
 }     else {}}
   if(j==0){printf("\n\nNENHUM ITEM ENCONTRADO\n\n");
   
                         return 0;
   
   }else{printf("\n\nFORAM ENCONTRADOS %d ITEN(S) CORRESPONDENTE(S)\n\n", j);
   
   
   printf("\nDIGITE O ID CORRESPONDENTE A O ITEM PROCURADO\n");
   scanf("%d", &item);
   if(fl[item].fil_id==0){

printf("\nID não encontrado!\n\n");
 return 0;
   }else{

 printF(item);

   }
   
   }
  
                         return item;
}





void loadClientes()
{

    int red;
    red = open("BancoC.txt", O_RDWR|O_CREAT, 0666);

   

        if(red < 0){
            printf("ERROR\n");
        }

    read(red, &cl, sizeof(struct cliente) * 1000);
    close(red);
}


void loadFilmes()
{

    int red;
    red = open("BancoF.txt", O_RDWR|O_CREAT, 0666);

   

        if(red < 0){
            printf("ERROR\n");
        }

    read(red, &fl, sizeof(struct filme) * 1000);
    close(red);
}

void writeClientes(void)
{

    int red;
    red = open("BancoC.txt", O_RDWR|O_CREAT, 0666);

   

        if(red < 0){
            printf("ERROR\n");
        }

    write(red,&cl, sizeof(struct cliente) * 1000);
    close(red);

}

void writeFilmes(void)
{

    int red;
    red = open("BancoF.txt", O_RDWR|O_CREAT, 0666);

   

        if(red < 0){
            printf("ERROR\n");
        }

    write(red,&fl, sizeof(struct filme) * 1000);
    close(red);

}
 
