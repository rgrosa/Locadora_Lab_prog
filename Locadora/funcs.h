   #include <time.h>
    #include <string.h>
    struct cliente{
		long int cli_id,cli_idade,cli_cpf;
		char cli_nome[100],cli_endereco[500];
			float saldo;
	};

	struct filme{
		int fil_id, fil_classificacao, fil_qtd_disponivel;
		char fil_nome[500], fil_genero[100], fil_sinopses[3000];
	};

	struct locacao{

	int locaF[100];

			int dia_compra,mes_compra,ano_compra;
			int dia_est,mes_est,ano_est;
	
int spc;
float saldo;
	};

	struct caixa{

	float saldo, pagamento, aReceber;





	};

struct filme fl[100];
struct cliente cl[100];
struct locacao cp[100];
struct caixa cx;


	void writeFilmes(void);
	void writeClientes(void);
	void writeLocacao(void);
	void loadCaixa(void);
	void loadFilmes(void);
	void loadLocacao (void);
	void loadClientes(void);
	void writeCaixa(void);
	void locacaoCliente(int idc, int idf);
	int buscaC(char busc[]);
	int buscaF(char busc[]);
	void editF(int idf);
	void editC(int idc);
	void exibeData(int idc);
	void mostraC(int idc);
	void testePrinta(int idc, int idf);
	int cancelaCompra(int idc);
	int quantidadeLocada(int idc);
	int calculaDia(int idc);
	void exibeDataEntrega(int idc);
	void entregaFilme(int idc);
	int dataCompra(int idc);
	void exibeF(int idf);