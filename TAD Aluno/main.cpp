#include <iostream>
#include <string>
// usado para conseguir usar o tipo string
#include "aluno.h" // para usar a classe aluno


using namespace std;

int main ()
{
    // declaração de variáveis ------------------------------------------------------
    // (variáveis 1)
    string n = "Nome" , mat = "Matricula";
    //
    // (variáveis 2)
    int age = 0;
    int vet[3];
    //
    // ------------------------------------------------------------------------------

    // Criação do aluno como objeto ------------------------------------------------

    Aluno breno(n,mat);

    // ------------------------------------------------------------------------------

    // aplicação --------------------------------------------------------------------

    //imprimir todas as informações do Aluno 
    // (Definiçaõ do Aluno)

    cout << "Defina o nome : ";
    cin >> n;
    breno.setNome(n);

    cout << "Defina a matricula : ";
    cin >> mat;
    breno.setMatricula(mat);

    cout << "Defina a idade : ";
    cin >> age;
    breno.setIdade(age);

    cout << "Digite as notas do aluno: " <<endl; 
    breno.leNotas();

    breno.leFrequencia();

    // (impressão)

    breno.relatorio();


    
    // ------------------------------------------------------------------------------
    return 0;
}