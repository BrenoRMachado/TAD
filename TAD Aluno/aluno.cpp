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

// (ler notas)
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

// (segunda etapa)
// (ler a frequencia)

void Aluno :: leFrequencia()
{
    for ( int i = 0 ; i < 3 ; i++)
    {
        bool valorValido = false;
        while(!valorValido)
        {
            int ref;
            cout << "frequencia " << i+1 << " : ";
            cin >> ref;
            if(ref == 1)
            {
                freq[i] = true;
                valorValido = true;
            }
            else if (ref == 0)
            {
                freq[i] = false;
                valorValido = true;
            }
            else 
            {
                cout << "Valor inválido, digite novamente." <<endl;
                
            }
        }
        
    }
}

// (imprimir um relatorio)

void Aluno :: relatorio()
{
    cout << "O nome do aluno eh: " << nome<<endl;
    cout << "A idade do aluno eh: " << idade<<endl;
    cout << "A matricula do aluno eh: " << matricula<<endl;
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "Na disciplina " << i+1 << " o aluno ";
        if(freq[i] == true)
        {
            cout << "foi frequente ";
        }
        else
        {
            cout << "nao foi frequente ";
        }
        if(notas[i] >= 60 )
        {
            cout << "e foi aprovado.";
        }
        else
        {
            cout << "e nao foi aprovado.";
        }
        cout <<endl;
    }

}

// ----------------------------------------------------------------------------------