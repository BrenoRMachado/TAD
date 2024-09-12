#include <iostream>
#include "Aluno.h"
#include <string>
using namespace std;

int main ()
{
    string n = "Breno", mat = "202376025";
    int i = 0;
    Aluno breno(n, mat);

    breno.leNotas();
    cout << breno.calculaMedia(); 

    breno.getNome();
    breno.setNome(n);

    breno.getIdade();
    cout << "Qual a idade de " << breno.getNome() << " ?" <<endl;
    cin >> i;
    breno.setIdade(i);

    breno.getMatricula();
    cout << "Qual a matricula de " << breno.getNome() << " ?" <<endl;
    cin >> mat;
    breno.setMatricula(mat);

    return 0;
}