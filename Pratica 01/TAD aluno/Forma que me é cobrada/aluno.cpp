#include <iostream>
#include <aluno.h>
using namespace std;

void Aluno :: definirAluno()
{
    cout << "digite a matrícula do aluno: ";
    cin >> matricula;
    cout << "\ndigite a idade do aluno: ";
    cin >> idade ;
    cout << "digite a nota do aluno: ";
    cin >> nota; 
}

void Aluno :: imprimirAluno()
{
    cout << "A matricula do aluno eh : " << matricula <<endl;
    cout << "A idade do aluno eh : " << idade <<endl;
    cout << "A nota do aluno eh: " << nota << endl;
}

bool Aluno :: foiAprovado()
{
    return nota >= 6.0;
}