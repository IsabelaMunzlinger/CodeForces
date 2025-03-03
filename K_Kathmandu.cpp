#include <iostream>  // Biblioteca para entrada e saída padrão (cin, cout)
#include <vector>    // Biblioteca para usar o vetor dinâmico (std::vector)

using namespace std; // Evita precisar escrever std:: antes de cada função da STL

// Função que verifica se é possível dormir pelo menos `v` minutos sem interrupção
char podeDormirEComer(int v, int d, vector<int>& refeicoes) {
    // Adiciona o início e o fim do voo na lista de refeições
    refeicoes.insert(refeicoes.begin(), 0); // Insere o 0 no início (hora inicial)
    refeicoes.push_back(d);                 // Adiciona D ao final (fim do voo)

    // Percorre os intervalos entre cada refeição consecutiva
    for (size_t i = 0; i < refeicoes.size() - 1; i++) {
        // Verifica se há um intervalo de pelo menos `v` minutos entre duas refeições
        if (refeicoes[i + 1] - refeicoes[i] >= v) {
            return 'Y'; // Se encontrar um intervalo suficiente, retorna 'Y'
        }
    }

    return 'N'; // Se nenhum intervalo for suficiente, retorna 'N'
}

// Função principal do programa
int main() {
    int v, d, m;
    cin >> v >> d >> m; // Lê os valores de entrada: tempo de sono, duração do voo e número de refeições

    vector<int> refeicoes(m); // Declara um vetor para armazenar os horários das refeições
    for (int i = 0; i < m; i++) {
        cin >> refeicoes[i]; // Lê cada horário das refeições
    }

    // Chama a função e imprime o resultado ('Y' ou 'N')
    cout << podeDormirEComer(v, d, refeicoes) << endl;

    return 0; // Indica que o programa terminou com sucesso
}
