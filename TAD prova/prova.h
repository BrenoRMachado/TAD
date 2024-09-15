class Prova
{
    private:

    // Todas as variáveis que eu irei usar -----------------------------------------
    int n; //numero de questões
    double *notasDasQuestoes; //vetor dinâmico que vai alocar a nota de cada questão
    double notaFinal; // variavel que vai armazenar o valor final
    // -----------------------------------------------------------------------------

    public:

    // construtor e destrutor ------------------------------------------------------
    //são declarados sem tipo, apenas o nome da classe

    Prova( int numero );
    ~Prova ();

    // -----------------------------------------------------------------------------

    // metodos ---------------------------------------------------------------------
    // as funções são declaradas de forma padrão, mas sua implementação é feita no 
    // arquivo.cpp 
    
    void leNotaQuestao(); //função que vai ler as notas de cada questão

    void calculaNota(); //função que vai calcular a nota final

    double getNotaFinal(); //função que vai mostrar a nota final

    // -----------------------------------------------------------------------------
    

};