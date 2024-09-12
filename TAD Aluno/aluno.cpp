#include <iostream>
#include <string>
#include "aluno.h" //para poder usar a classe aluno

using namespace std;


// Construtor e Destrutor ----------------------------------------------------------
Aluno :: Aluno(string n, string mat)
{
    nome = n;
    matricula = mat;
}

Aluno :: ~Aluno()
{

}
// ----------------------------------------------------------------------------------

// Getters e Setters ----------------------------------------------------------------

// (nome)
string Aluno :: getNome()
{
    return nome;
}

void Aluno :: setNome(string n)
{
    nome = n;
}
// (matricula)
string Aluno :: getMatricula()
{
    return matricula;
}

void Aluno :: setMatricula(string mat)
{
    matricula = mat;
}
// (idade)
int Aluno :: getIdade()
{
    return idade;
}

void Aluno :: setIdade(int age)
{
    idade = age;
}

// ----------------------------------------------------------------------------------

// métodos --------------------------------------------------------------------------

// (ler notas)d
void Aluno :: leNotas()
{
    for (int i = 0 ; i < 3 ; i++)
    {
        cout << "nota " << i+1 << " : ";
        cin >> notas[i];
    }
}

// (calcular a média das notas)
double Aluno :: calculaMedia()
{
    double soma = 0; //variável que vai receber o somatório de notas
    for (int i = 0 ; i < 3 ; i++)
    {
        soma += notas[i];
    }
    return soma/3;
}


// ----------------------------------------------------------------------------------