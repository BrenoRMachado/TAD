#include <iostream>
#include <aluno.h>
using namespace std;


int main ()
{
    Aluno breno;

    breno.definirAluno();
    breno.imprimirAluno();
    
    if (breno.foiAprovado())
    {
        cout << "O aluno foi aprovado!" << endl;
    } 
    else 
    {
        cout << "O aluno foi reprovado!" << endl;
    }


    return 0;
}