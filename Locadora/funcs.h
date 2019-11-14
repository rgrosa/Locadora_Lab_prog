struct Cliente{
	int cli_id, cli_idade;
	long cli_cpf;
	char cli_nome[100], cli_endereco[500];
};

struct Filme{
	int fil_id, fil_classificacao, fil_qtd_disponivel;
	char fil_nome[500], fil_genero[100], fil_sinopses[3000];
};

struct Locacao{
	int loc_id, loc_cliId, loc_filId;
	struct tm loc_data_locacao;
};
void loadClientes(struct Cliente *c);
void loadFilmes(struct Filme *f);
