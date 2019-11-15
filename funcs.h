   #include <time.h>
    #include <string.h>
    struct cliente{
		int cli_id,cli_idade,cli_cpf;
		char cli_nome[100],cli_endereco[500];
	};

	struct filme{
		int fil_id, fil_classificacao, fil_qtd_disponivel;
		char fil_nome[500], fil_genero[100], fil_sinopses[3000];
	};

	struct locacao{
		int loc_id, loc_cliId, loc_filId;
		struct tm loc_data_locacao;
	};
struct filme fl[100];
struct cliente cl[100];
	void writeFilmes(void);

	void writeClientes(void);

	void loadFilmes(void);

	void loadClientes(void);
	int buscaC(char busc[]);
	int buscaF(char busc[]);
	void editF(int idf);
	void editC(int idc);