#include <iostream>
#include "aluno.h"
using namespace std;

Aluno :: Aluno(int numNotas)
{
    n = numNotas;
    notas = new double[n]; //alocação dinâmica do vetor
}

Aluno :: ~Aluno()
{
    delete [] notas; //libera espaço do vetor
}

void Aluno :: definirAluno()
{
    cout << "digite a matricula do aluno: ";
    cin >> matricula;
    cout << "digite a idade do aluno: ";
    cin >> idade ;
    cout << "digite as notas do aluno: " <<endl;
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << "nota " << i+1 <<" :";
        cin >> notas[i];
    }   
}

void Aluno :: imprimirAluno()
{
    cout << "A matricula do aluno eh : " << matricula <<endl;
    cout << "A idade do aluno eh : " << idade <<endl;
    cout << "A nota do aluno eh: " <<endl;
    for ( int i = 0 ; i < 3 ; i++ )
    {
        cout << "nota " << i + 1 << " eh : " << notas[i] <<endl;
    }
}

double Aluno :: calcularMedia()
{
    double soma = 0;
    for ( int i = 0 ; i < 3 ; i++)
    {
        soma += notas[i];
    }
    media = soma / 3;

    return media;

}
bool Aluno :: foiAprovado()
{
    return media >= 6.0;
}
