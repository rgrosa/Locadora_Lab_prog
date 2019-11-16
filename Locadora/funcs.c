#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "funcs.h"
#include <string.h>


void exibeData(int idc)
{




    printf("\nData ........: %d/",cp[idc].dia_compra);
    printf("%d/",cp[idc].mes_compra); //mês
    printf("%d\n\n",cp[idc].ano_compra); //ano



}


void mostraC(int idc)
{


    if(cl[idc].cli_id==0)
    {

        printf("\nid invalido!\n");
    }
    else
    {
        printf("\n");
        printf("=====Dados do cliente=====\n");
        printf("CLIENTE: %s", cl[idc].cli_nome);
        printf("ID: %ld\n", cl[idc].cli_id);
        printf("CPF: %ld\n", cl[idc].cli_cpf);
        printf("ENDEREÇO: %s\n", cl[idc].cli_endereco);
    }
}


int buscaC(char busc[])
{



    int i, item;
    int j=0;

    char *psResultado;

    for(i=0; i<100; i++)
    {
        psResultado = strstr(cl[i].cli_nome, busc);

        if(psResultado!= NULL)
        {

            printf("NOME: %s", cl[i].cli_nome);
            printf("ID: %ld\n\n", cl[i].cli_id);

            j++;
        }
        else {}
    }
    if(j==0)
    {
        printf("\n\nNENHUM ITEM ENCONTRADO\n\n");

        return 0;

    }
    else
    {
        printf("\n\nFORAM ENCONTRADOS %d ITEN(S) CORRESPONDENTE(S)", j);


        printf("\n\nDIGITE O ID CORRESPONDENTE A O ITEM PROCURADO: ");
        scanf("%d", &item);
        if(cl[item].cli_id==0)
        {

            printf("\nID não encontrado!\n\n");
            return 0;
        }
        else
        {

            mostraC(item);

        }

    }

    return item;
}


void exibeF(int idf)
{

    printf("\n");
    printf("=====Dados do filme=====\n");
    printf("FILME: %s", fl[idf].fil_nome);
    printf("ID: %d\n", fl[idf].fil_id);
    printf("SINOPSE: %s", fl[idf].fil_sinopses);
    printf("Quantidade Disponivel em estoque: %d\n\n", fl[idf].fil_qtd_disponivel);

}



void editC(int idc)
{



    if (cl[idc].cli_id==0)
    {


        printf("\n\nID INEXISTENTE\n\n");
    }
    else
    {


        printf("\n");
        printf("############EDITAR############");

        printf("\n\nNome do cliente: %s", cl[idc].cli_nome);
        printf("Editar para: ");
        fflush(stdin);
        getchar();
        fgets(cl[idc].cli_nome, 40, stdin);

        printf("ENDEREÇO: %s", cl[idc].cli_endereco);
        printf("Editar para: ");
        fflush(stdin);
        getchar();
        fgets(cl[idc].cli_endereco, 40, stdin);



        printf("CPF: %ld\n",cl[idc].cli_cpf);
        printf("Editar para: ");
        scanf("%ld",&cl[idc].cli_cpf);

        printf("IDADE: %ld\n",cl[idc].cli_idade);
        printf("Editar para: ");
        scanf("%ld",&cl[idc].cli_idade);
        writeClientes();
    }
}




void editF(int idf)
{



    if (fl[idf].fil_id==0)
    {


        printf("\n\nID INEXISTENTE\n\n");
    }
    else
    {


        printf("\n");
        printf("############EDITAR############");

        printf("\n\nFILME: %s", fl[idf].fil_nome);
        printf("Editar para: ");
        fflush(stdin);
        getchar();
        fgets(fl[idf].fil_nome, 40, stdin);

        printf("SINOPSE: %s", fl[idf].fil_sinopses);
        printf("Editar para: ");
        fflush(stdin);
        getchar();
        fgets(fl[idf].fil_sinopses, 1000, stdin);



        printf("Quantidade Disponivel em estoque: %d\n", fl[idf].fil_qtd_disponivel);
        printf("Editar para: ");
        scanf("%d",&fl[idf].fil_qtd_disponivel);

        writeFilmes();
    }
}






int buscaF(char busc[])
{



    int i, item;
    int j=0;

    char *psResultado;

    for(i=0; i<100; i++)
    {
        psResultado = strstr(fl[i].fil_nome, busc);

        if(psResultado!= NULL)
        {

            printf("NOME: %s", fl[i].fil_nome);
            printf("ID: %d\n\n", fl[i].fil_id);

            j++;
        }
        else {}
    }
    if(j==0)
    {
        printf("\n\nNENHUM ITEM ENCONTRADO\n\n");

        return 0;

    }
    else
    {
        printf("\n\nFORAM ENCONTRADOS %d ITEN(S) CORRESPONDENTE(S)", j);


        printf("\n\nDIGITE O ID CORRESPONDENTE A O ITEM PROCURADO: ");
        scanf("%d", &item);
        if(fl[item].fil_id==0)
        {

            printf("\nID não encontrado!\n\n");
            return 0;
        }
        else
        {

            exibeF(item);

        }

    }

    return item;
}





void loadClientes()
{

    int red;
    red = open("BancoC.txt", O_RDWR|O_CREAT, 0666);



    if(red < 0)
    {
        printf("ERROR\n");
    }

    read(red, &cl, sizeof(struct cliente) * 1000);
    close(red);
}


void loadFilmes()
{

    int red;
    red = open("BancoF.txt", O_RDWR|O_CREAT, 0666);



    if(red < 0)
    {
        printf("ERROR\n");
    }

    read(red, &fl, sizeof(struct filme) * 1000);
    close(red);
}

void writeClientes(void)
{

    int red;
    red = open("BancoC.txt", O_RDWR|O_CREAT, 0666);



    if(red < 0)
    {
        printf("ERROR\n");
    }

    write(red,&cl, sizeof(struct cliente) * 1000);
    close(red);

}

void writeFilmes(void)
{

    int red;
    red = open("BancoF.txt", O_RDWR|O_CREAT, 0666);



    if(red < 0)
    {
        printf("ERROR\n");
    }

    write(red,&fl, sizeof(struct filme) * 1000);
    close(red);

}

void loadLocacao()
{

    int red;
    red = open("BancoLoca.txt", O_RDWR|O_CREAT, 0666);



    if(red < 0)
    {
        printf("ERROR\n");
    }

    read(red, &cp, sizeof(struct locacao) * 1000);
    close(red);
}
void writeLocacao(void)
{

    int red;
    red = open("BancoLoca.txt", O_RDWR|O_CREAT, 0666);



    if(red < 0)
    {
        printf("ERROR\n");
    }

    write(red,&cp, sizeof(struct locacao) * 1000);
    close(red);

}




int dataCompra(int idc)
{
    int i;
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);
    data_hora_atual = localtime(&segundos);

    if(cp[idc].spc == 0 || (cp[idc].dia_compra == data_hora_atual->tm_mday && cp[idc].mes_compra == data_hora_atual->tm_mon+1 && cp[idc].ano_compra==data_hora_atual->tm_year+1900))
    {
        cp[idc].dia_compra=data_hora_atual->tm_mday;
        cp[idc].mes_compra=data_hora_atual->tm_mon+1;
        cp[idc].ano_compra=data_hora_atual->tm_year+1900;
        cp[idc].spc=1;
        exibeData(idc);
        return 0;
        i=101;
    }
    else
    {

        printf("Cliente não pode locar mais filmes.\n");
        printf("Motivo: Divida pendente.");
        return 1;
    }

}







int locacaoCliente(int idc, int idf)
{
    int i;



    for(i=1; i<100; i++)
    {

        if (cp[idc].locaF[i]==0)
        {
            cp[idc].locaF[i]=idf;


            i=101;

            return i;


        }
        else {}


    }

}
void testePrinta(int idc, int idf)
{
    int i;


    for(i=1; i<100; i++)
    {
        if (cp[idc].locaF[i]!=0)
        {

            printf("%d",i);
            printf("\n\n\n%d   --------  %d\n\n\n",idc, cp[idc].locaF[i]);





        }
        else
        {
            i=101;
        }








    }





}
