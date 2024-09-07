

// chat gpt explicou sobre Enum Class (C++11) e Enum como Flags (Bitwise Operations)

/*
    (enum class)
    enum class Cor { Vermelho, Verde, Azul };: Diferente do enum comum, o enum class é fortemente tipado, o que significa que não pode ser implicitamente
    convertido para um inteiro sem um cast explícito. Isso ajuda a evitar erros de conversão acidental.
    No código, a variável minhaCor recebe Cor::Verde, e usamos static_cast<int>(minhaCor) para exibir o valor da cor como um número.

    (enum como flags)
    Neste exemplo, o enum Permissao usa valores de bits (potências de 2) para representar permissões.
    Permissões podem ser combinadas com o operador bitwise OR (|) e verificadas com o operador AND (&).
    A combinação Leitura | Escrita resulta no valor 3, que significa que o usuário tem permissões de leitura e escrita.

*/

#include <iostream>
using namespace std;

// Enum básico
enum DiaDaSemana { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };

// Enum com valores atribuídos manualmente
enum MesDoAno { Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro };

// Enum class (enum fortemente tipado) - introduzido no C++11
enum class Cor { Vermelho, Verde, Azul };

int main() {
    // Uso básico do enum
    DiaDaSemana hoje = Segunda;
    
    // Visualização do valor de um enum
    cout << "Hoje é Segunda-feira e o valor no enum é: " << hoje << endl;
    
    // Iteração simples com enum básico
    DiaDaSemana dia = Domingo;
    while (dia <= Sabado) {
        cout << "Valor do dia da semana: " << dia << endl;
        dia = static_cast<DiaDaSemana>(dia + 1); // Avançando o valor do enum
    }
    
    // Uso do enum com valores atribuídos
    MesDoAno mesAtual = Julho;
    cout << "O mês atual é Julho e seu valor no enum é: " << mesAtual << endl;

    // Trabalhando com enum class
    Cor minhaCor = Cor::Verde;

    // Como `enum class` é fortemente tipado, precisamos de casting para exibir seu valor
    if (minhaCor == Cor::Verde) {
        cout << "Minha cor favorita é Verde." << endl;
    }

    // Convertemos explicitamente o valor de `enum class` para inteiro para exibi-lo
    cout << "O valor da cor verde no enum class é: " << static_cast<int>(minhaCor) << endl;

    // Enum como flags ou bits (técnica avançada)
    enum Permissao {
        Leitura = 1,       // 0001
        Escrita = 2,       // 0010
        Execucao = 4       // 0100
    };

    // Combinando permissões usando bitwise OR
    int permissaoUsuario = Leitura | Escrita; // 0001 | 0010 = 0011 (leitura + escrita)
    cout << "Permissões do usuário: " << permissaoUsuario << endl;

    // Verificando permissões usando bitwise AND
    if (permissaoUsuario & Leitura) {
        cout << "Usuário tem permissão de leitura." << endl;
    }

    if (permissaoUsuario & Escrita) {
        cout << "Usuário tem permissão de escrita." << endl;
    }

    if (!(permissaoUsuario & Execucao)) {
        cout << "Usuário **não** tem permissão de execução." << endl;
    }

    return 0;
}
