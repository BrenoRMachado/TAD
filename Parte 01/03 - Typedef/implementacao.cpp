#include <iostream>
using namespace std;

// Usando typedef para simplificar a declaração de tipos básicos
typedef int Idade;
typedef double Salario;

// Usando typedef para ponteiros
typedef int* PtrInteiro;

// Usando typedef para arrays
typedef int Matriz[3][3];

// Usando typedef para estruturas
typedef struct {
    string nome;
    Idade idade;  // Usando typedef Idade
    Salario salario;  // Usando typedef Salario
} Pessoa;


int main() {
    // Usando typedef para tipos básicos
    Idade minhaIdade = 30;
    Salario meuSalario = 5000.50;

    cout << "Minha idade eh: " << minhaIdade << endl;
    cout << "Meu salario eh: " << meuSalario << endl;

    // Usando typedef para ponteiros
    int numero = 10;
    PtrInteiro ptr = &numero;
    cout << "Valor apontado pelo ponteiro: " << *ptr << endl;

    // Usando typedef para arrays
    Matriz matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Elementos da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Usando typedef para estruturas
    Pessoa pessoa1;
    pessoa1.nome = "Joao";
    pessoa1.idade = 25;
    pessoa1.salario = 4000.75;

    cout << "Dados da pessoa:" << endl;
    cout << "Nome: " << pessoa1.nome << endl;
    cout << "Idade: " << pessoa1.idade << endl;
    cout << "Salario: " << pessoa1.salario << endl;

    return 0;
}
