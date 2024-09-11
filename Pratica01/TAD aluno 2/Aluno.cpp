#include <iostream>
#include "Aluno.h"

using namespace std;

Aluno :: Aluno(string n, string mat)
{
    nome = n;
    matricula = mat;
}
Aluno :: ~Aluno()
{}

void Aluno :: leNotas()
{
    cout << "Digite as 7 notas do aluno: " <<endl;
    for ( int i = 0 ; i < 7 ; i++)
    {
        cout << "Nota " << i+1 << " : " <<endl;
        cin >> notas[i];
    }
}

double Aluno :: calculaMedia()
{
    double soma = 0;
    cout << "A media do aluno eh: "<<endl;
    for (int i = 0 ; i < 7 ; i++)
    {
        soma += notas[i];
    }

    return soma/7 ;
}