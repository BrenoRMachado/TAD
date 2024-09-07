#include <iostream>
using namespace std;

// Usando typedef para simplificar a declaração de tipos com restrições
typedef unsigned int UnsignedInt;
typedef signed int SignedInt;
typedef short int ShortInt;
typedef unsigned short int UnsignedShortInt;

int main() {
    // Declarações sem typedef
    unsigned int idadeSemTypedef = 25;
    signed int temperaturaSemTypedef = -15;
    short int nivelSemTypedef = 30000;  // No intervalo do tipo short
    unsigned short int qtdItensSemTypedef = 60000;  // Sem sinal, pode armazenar valores maiores

    cout << "Sem typedef:" << endl;
    cout << "Idade (unsigned int): " << idadeSemTypedef << endl;
    cout << "Temperatura (signed int): " << temperaturaSemTypedef << endl;
    cout << "Nivel (short int): " << nivelSemTypedef << endl;
    cout << "Quantidade de itens (unsigned short int): " << qtdItensSemTypedef << endl << endl;

    // Declarações com typedef
    UnsignedInt idadeComTypedef = 30;
    SignedInt temperaturaComTypedef = -20;
    ShortInt nivelComTypedef = 20000;  // Mesma ideia do short
    UnsignedShortInt qtdItensComTypedef = 50000;  // Sem sinal, valor grande

    cout << "Com typedef:" << endl;
    cout << "Idade (UnsignedInt): " << idadeComTypedef << endl;
    cout << "Temperatura (SignedInt): " << temperaturaComTypedef << endl;
    cout << "Nivel (ShortInt): " << nivelComTypedef << endl;
    cout << "Quantidade de itens (UnsignedShortInt): " << qtdItensComTypedef << endl << endl;

    // Exemplo de valores fora do intervalo esperado
    unsigned int valorForaDoLimite = -10;  // Tentativa de atribuir valor negativo em unsigned
    cout << "Valor fora do limite (unsigned int com valor -10): " << valorForaDoLimite << endl;

    return 0;
}
