#include <string>
using namespace std;
// include para usar o tipo string + std para evitar usar std ::

class Aluno
{
    private:
    //tudo que está aqui só pode ser acessado pela classe
    string nome, matricula;
    int idade;
    double notas[3];
    
    public:
    //tudo que está aqui pode ser acessado por um arquivo com o include aluno.h

    // Construtor e Destrutor --------------------------------------------------------
    //  (construtor)
    Aluno(string n, string mat);
    //  (destrutor)
    ~Aluno();
    // -------------------------------------------------------------------------------

    // Getters e Setters -------------------------------------------------------------

    // (Nome) 
    string getNome();
    void setNome(string n);
    // (Matricula)
    string getMatricula();
    void setMatricula(string mat);
    // (idade)
    int getIdade();
    void setIdade(int age);

    // -------------------------------------------------------------------------------

    // métodos -----------------------------------------------------------------------
    void leNotas();
    double calculaMedia();
    // -------------------------------------------------------------------------------
};