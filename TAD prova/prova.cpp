#include <iostream>
#include "prova.h"

using namespace std;

// construtor e destrutor --------------------------------------------------------
Prova :: Prova(int numero)
{
    n = numero; // associa o correspondendo numero da main ao n da classe
    notasDasQuestoes = new double[n]; //cria o vetor dinamicamente 
}

Prova :: ~Prova()
{
    delete [] notasDasQuestoes; //limpa a memória do vetor dinâmico
}
// ------------------------------------------------------------------------------

// metodos ----------------------------------------------------------------------
void Prova :: leNotaQuestao()
{
    for ( int i = 0 ; i < n ; i++)
    {
        cout << "O aluno tirou quanto na questao " << i+1 << " ?"<<endl;
        cin >> notasDasQuestoes[i];
    }
}

void Prova :: calculaNota()
{
    // descobrir qual a menor
    int menor = notasDasQuestoes[0];
    for ( int i = 1 ; i < n ; i++)
    {
        if ( notasDasQuestoes[i] < menor)
        {
            menor = notasDasQuestoes[i];
        }
    }
    
    for ( int i = 0 ; i<n ; i++)
    {
        if ( notasDasQuestoes[i] != menor)
        {
            notaFinal += notasDasQuestoes[i];
        }
    }

}

double Prova :: getNotaFinal()
{
    return notaFinal;
}
// ------------------------------------------------------------------------------