#include <string>
using namespace std;
class Aluno
{
    private:
        int idade;
        string nome, matricula;
        double notas[7];

    public:
        Aluno(string n, string mat);
        ~Aluno();

        string getNome();
        void setNome(string n);

        int getIdade();
        string getMatricula();

        int setIdade(int i);
        int setMatricula(string mat);

        void leNotas();
        double calculaMedia();

};