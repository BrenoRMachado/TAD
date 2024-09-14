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

    // (impressão)

    cout << "As informacoes do aluno sao: " <<endl;
    cout << "Nome: " << breno.getNome() <<endl;
    cout << "Matricula: "<< breno.getMatricula() <<endl;
    cout << "Idade: " << breno.getIdade() <<endl;
    cout << "Media: " << breno.calculaMedia() <<endl;


    
    // ------------------------------------------------------------------------------
    return 0;
}