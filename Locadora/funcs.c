#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "funcs.h"

void loadClientes(struct Cliente *c)
{

    int red;
    red = open("Banco/Clientes.txt", O_RDWR|O_CREAT, 0666);

    printf("%d\n",red);

        if(red < 0){
            printf("ERROR\n");
        }

    read(red, c, sizeof(struct Cliente) * 1000);
    close(red);
}

void loadFilmes(struct Filme *f)
{

    int red;
    red = open("Banco/Filmes.txt", O_RDWR|O_CREAT, 0666);

    printf("%d\n",red);

        if(red < 0){
            printf("ERROR\n");
        }

    read(red, f, sizeof(struct Filme) * 1000);
    close(red);
}
