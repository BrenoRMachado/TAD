
class Aluno
{
    private:
        int matricula , idade;
        int n; // vai representar a quantidade de notas
        double *notas;
        double media;

    public:
        //adição de um criador e um destrutor
        Aluno(int numNotas);
        ~Aluno();

        void definirAluno();
        void imprimirAluno();
        double calcularMedia();
        bool foiAprovado();
        
};