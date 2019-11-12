    #include <time.h>
    
    struct cliente{
		int cli_id, cli_idade, cli_cpf;
		char cli_nome[100], cli_endereco[500];
	};

	struct filme{
		int fil_id, fil_classificacao, fil_qtd_disponivel;
		char fil_nome[500], fil_genero[100], fil_sinopses[3000];
	};

	struct locacao{
		int loc_id, loc_cliId, loc_filId;
		struct tm loc_data_locacao;
	};

	void writeFilmes(struct filme *f);

	void writeClientes(struct cliente *c);

	void loadFilmes(struct filme *f);

	void loadClientes(struct cliente *c);