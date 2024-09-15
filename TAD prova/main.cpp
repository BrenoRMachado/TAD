#include <iostream>
#include "prova.h"
using namespace std;

int main ()
{
    int numero; // vai servir de equivalente a numero de questões aqui no main

    Prova prova1(numero); //Precisa de parenteses por que o construtor possui parâmetros

    cout << "Digite as notas do aluno: \n";
    prova1.leNotaQuestao(); // chamou para ler cada nota do aluno

    prova1.calculaNota(); // chamou para calcular a nota final 

    cout << "A nota final eh: " << prova1.getNotaFinal();
    // chamou para mostrar a nota final



    return 0;
}