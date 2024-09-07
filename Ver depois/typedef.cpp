// chat gpt explicou sobre typedef para funções (callbacks)

/*

    (typedef para funções)
    typedef void (*FuncaoCallback)(int);: Cria um alias para ponteiros de função
    que aceitam um int como argumento e não retornam valor (void). No código, uma função chamada 
    exemploCallback é atribuída ao ponteiro callback, e então chamada com um valor.

    typedef para funções: Facilita a criação e o uso de ponteiros de função, especialmente em casos como callbacks.
    
*/

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

// Usando typedef para funções
typedef void (*FuncaoCallback)(int);

void exemploCallback(int valor) {
    cout << "Callback chamado com valor: " << valor << endl;
}

int main() {
    // Usando typedef para tipos básicos
    Idade minhaIdade = 30;
    Salario meuSalario = 5000.50;

    cout << "Minha idade é: " << minhaIdade << endl;
    cout << "Meu salário é: " << meuSalario << endl;

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
    pessoa1.nome = "João";
    pessoa1.idade = 25;
    pessoa1.salario = 4000.75;

    cout << "Dados da pessoa:" << endl;
    cout << "Nome: " << pessoa1.nome << endl;
    cout << "Idade: " << pessoa1.idade << endl;
    cout << "Salário: " << pessoa1.salario << endl;

    // Usando typedef para funções (callback)
    FuncaoCallback callback = exemploCallback;
    callback(100);

    return 0;
}
