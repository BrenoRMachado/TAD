
class Aluno
{
    private:
        int matricula;
        int idade;
        double nota[3];
        double media;

    public:
        void definirAluno();
        void imprimirAluno();
        double calcularMedia();
        bool foiAprovado();
        
};