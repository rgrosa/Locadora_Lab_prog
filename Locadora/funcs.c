#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "funcs.h"
    

void loadClientes(struct cliente *c)
{

    int red;
    red = open("Banco/Clientes.txt", O_RDWR|O_CREAT, 0666);

    printf("%d\n",red);

        if(red < 0){
            printf("ERROR\n");
        }

    read(red, c, sizeof(struct cliente) * 1000);
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

void writeClientes(struct cliente *c)
{

    int red;
    red = open("Banco/Clientes.txt", O_RDWR|O_CREAT, 0666);

 

        if(red < 0){
            printf("ERROR\n");
        }

    write(red, c, sizeof(struct cliente) * 1000);
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

    printf("SUCESSO");
}
 
