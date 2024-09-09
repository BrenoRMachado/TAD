#include <iostream>
using namespace std;

/*
    (instruções)

    programa que lê um vetor de 50 elementos inteiros
    - calcula e imprime a soma dos elementos
    - calcula e imprime a soma dos elementos pares 
    - calcula e imprime a soma dos elementos de indice par
    - imprime o maior elemento
    - imprime o indice do menor elemento
    - imprime o vetor em ordem crescente de seus elementos juntamente com
    os indices originais 
*/

// Criação  do "tipo" vetor que representa um vetor de 50 elementos

typedef int vetor[50];

// --------------------------------------------------------------

//Funções -------------------------------------------------------

// calculo e impressão das somas 
void calculaSoma(vetor vet)
{
    // declarações -----------------------------------------------
    int soma = 0 , somaPar = 0 , somaIndicePar = 0 ;
    // -----------------------------------------------------------

    // for que define o resultado das variáveis ------------------
    for ( int i = 0 ; i < 50 ; i++)
    {
        soma += vet[i];

        if (vet[i] % 2 == 0)
        {
            somaPar += vet[i];
        }
        if (i % 2 == 0)
        {
            somaIndicePar += vet[i];
        }
    }
    // ------------------------------------------------------------

    // impressões -------------------------------------------------
    cout << "Soma = " << soma  << endl;
    cout << "Soma dos pares = " << somaPar << endl;
    cout << "Soma dos elementos de indices pares = ";
    cout << somaIndicePar << endl;  
    // ------------------------------------------------------------
}

// impressão do maior e o indice do menor
void imprimeMaiorEIndice(vetor vet)
{
    // declarações ------------------------------------------------
    int maior = vet[0], menor = vet[0];
    // ------------------------------------------------------------

    // Função que define o maior e o menor ------------------------
    for (int i = 0 ; i < 50 ; i++)
    {
        if ( vet[i] > maior )
        {
            maior = vet[i];
        }
        else if (vet[i] < menor)
        {
            menor = vet[i];
        }
    }
    // -------------------------------------------------------------

    // impressão do maior ------------------------------------------
    cout << "Maior = " << maior << endl;
    // -------------------------------------------------------------

    // Chamado da função que imprime o indice do menor  ------------
    imprimeMenor(vet,menor);
    // -------------------------------------------------------------

}

// função que imprime o menor
void imprimeMenor( vetor vet, int menor)
{

    // impressão do indice do menor --------------------------------
    cout << "O indice do menor eh: " << endl;
    // -------------------------------------------------------------

    // for que vai identificar e imprimir o indice -----------------
    for ( int i = 0 ; i < 50 ; i++)
    {
        if ( vet[i] == menor)
        {
            cout << i; 
        }
    }
    // -------------------------------------------------------------
}

// impressão da ordem crescente e dos indices originais
void ordemEIndice(vetor vet)
{
    vetor indice;

    for ( int i = 0 ; i < 50 ; i++)
    {
        indice[i] = i ;
    }

    ordena(vet , indice);

    for ( int i = 0 ; i < 50 ; i++)
    {
        cout << vet[i] << endl;
        cout << "Indice Original" << indice[i] << endl;
    }
}

// função que ordena ---------------------------------------------
void ordena(vetor vet, vetor indice)
{
    int indiceMenor, menor;

    for ( int i = 0 ; i < 49 ; i++)
    {
        indiceMenor = i ;
        menor = vet[i];
        for ( int j = i + 1 ; j < menor ; j++)
        {
            if (vet[j] < menor)
            {
                indiceMenor = j;
                menor = vet[j];
            }
        }
        vet[indiceMenor] = vet[i];
        vet[i] = menor;
        indice[indiceMenor] = indice[i];
        indice[i] = indiceMenor;
    }
}
// --------------------------------------------------------------


// --------------------------------------------------------------

int main ()
{
    // Declaração de variáveis ----------------------------------
    vetor vet;
    int maior, menor;
    // ----------------------------------------------------------

    // Leitura do vetor -----------------------------------------
    for (int i = 0 ; i < 50 ; i++)
    {
        cin >> vet[i];
    }
    //-----------------------------------------------------------

    // calculo e impressão das somas ----------------------------
    calculaSoma(vet);
    // ----------------------------------------------------------

    // impressão do maior e o indice do menor -------------------
    imprimeMaiorEIndice(vet);
    // ----------------------------------------------------------

    // impressão da ordem crescente e dos indices originais -----
    ordemEIndice(vet);
    // ----------------------------------------------------------



    return 0;
}