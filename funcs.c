#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "funcs.h"
    #include <string.h>

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

   

    printf("Quantidade Disponivel em estoque: %d para -> \n\n", fl[idf].fil_qtd_disponivel);
        scanf("%d",&fl[idf].fil_qtd_disponivel);
                
                 writeFilmes();
}}
void printF(int idf){
 
  idf--;
printf("\n\nNome do FILME %s", fl[idf].fil_nome);
printf("ID: %d\n", fl[idf].fil_id);
printf("SINOPSE: %s", fl[idf].fil_sinopses);
printf("Quantidade Disponivel em estoque: %d\n\n", fl[idf].fil_qtd_disponivel);


}





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
   
   
   }
   printF(item);
                         return 0;
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
 
