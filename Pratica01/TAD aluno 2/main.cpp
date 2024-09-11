#include <iostream>
#include "Aluno.h"
#include <string>
using namespace std;

int main ()
{
    string n = "Breno", mat = "202376025";
    Aluno breno(n, mat);

    breno.leNotas();
    cout << breno.calculaMedia(); 


    return 0;
}