#include <iostream> 
using namespace std;


// Criação da classe -----------------------------------------------------------
class Aluno
{
    private:

        int matricula;
        int idade;
        double nota;

    public:

        void definirAluno()
        {
            cout << "digite a matrícula do aluno: ";
            cin >> matricula;
            cout << "\ndigite a idade do aluno: ";
            cin >> idade ;
            cout << "digite a nota do aluno: ";
            cin >> nota; 
        }

        void imprirAluno()
        {
            cout << "A matricula do aluno eh : " << matricula <<endl;
            cout << "A idade do aluno eh : " << idade <<endl;
            cout << "A nota do aluno eh: " << nota << endl;
        }

        bool foiAprovado()
        {
            // ou
            // sem if, apenas return nota >=6.0
            if ( nota >= 6.0)
            {
                return true;
            }
            else 
            {
                return false;
            }
            
        }
};
// ---------------------------------------------------------------------------------
int main ()
{
    Aluno breno;
    
    breno.definirAluno();
    breno.imprirAluno();
    breno.foiAprovado();

    if (breno.foiAprovado())
    {
        cout << "O aluno foi aprovado!!!" << endl;
    }
    else 
    {
        cout << "O aluno não foi aprovado!!!" << endl;
    }
    return 0;
}