#include <iostream>
#include "aluno.h"
using namespace std;


int main ()
{
    int numNotas = 0;
    cout << "Escreva o numero de notas: ";
    cin >> numNotas;

    Aluno breno(numNotas);

    breno.definirAluno();
    breno.imprimirAluno();
    cout << "A media do aluno eh: " << breno.calcularMedia() <<endl;
    
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

//dicas: include com " "
// achar o caminho com botão esquerdo copy path
// cd "caminho"
//para compilar: g++ main.cpp aluno.cpp -o output.exe
//para executar: .\output.exe