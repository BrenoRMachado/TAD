#include <iostream>
using namespace std;

// Enum básico
enum DiaDaSemana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };

// Enum com valores atribuídos manualmente
enum MesDoAno { Janeiro = 4, Fevereiro, Marco, Abril, Maio, Junho, Julho , Agosto, Setembro, Outubro, Novembro, Dezembro };

int main() {
    // Uso básico do enum
    DiaDaSemana hoje = Segunda;
    
    // Visualização do valor de um enum
    cout << "Hoje eh Segunda-feira e o valor no enum eh: " << hoje << endl;
    
    // Iteração simples com enum básico usando conversão implícita
    for (int dia = Domingo; dia <= Sabado; ++dia) {
        cout << "Valor do dia da semana: " << dia << endl;
    }

    // Uso do enum com valores atribuídos
    MesDoAno mesAtual = Marco;
    cout << "O mes atual eh Marco e seu valor no enum eh: " << mesAtual << endl;

    // Trabalhando com valores atribuídos manualmente
    MesDoAno mesAniversario = Julho;
    cout << "Meu mes de aniversario eh Julho e seu valor no enum eh: " << mesAniversario << endl;


    // Iteração simples do enum com valores atribuídos manualmente usando conversão implícita
    for (int mes = Janeiro; mes <= Dezembro; ++mes) {
        cout << "Mes: " << mes << endl;
    }

    return 0;
}
