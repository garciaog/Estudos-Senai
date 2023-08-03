#include <iostream>
#include <string> // Incluir a biblioteca para trabalhar com strings

int main() {
    std::string opcao; // Alterar para std::string para ler o texto digitado

    std::cout << "Digite sim ou não: ";
    std::cin >> opcao;

    if (opcao == "sim" || opcao == "Sim" || opcao == "SIM") {
        std::cout << "Compilador nosso, que estás em execução,\n"
                     "Santificado seja o teu código-fonte.\n"
                     "Venha a nós o teu debug,\n"
                     "Seja feita a tua correção,\n"
                     "Assim no sistema como na memória.\n"
                     "O loop nosso de cada dia nos dai hoje,\n"
                     "Perdoai os nossos bugs,\n"
                     "Assim como nós perdoamos os bugs alheios.\n"
                     "Não nos deixeis cair em deadlocks,\n"
                     "E livrai-nos das variáveis não inicializadas.\n"
                     "Dá-nos paciência para a compilação lenta,\n"
                     "E sabedoria para encontrar os erros de lógica.\n"
                     "Protege-nos dos vazamentos de memória,\n"
                     "E guia-nos pelo caminho da otimização correta.\n"
                     "Que as bibliotecas sejam sempre atualizadas,\n"
                     "E que a documentação esteja sempre completa.\n"
                     "Dá-nos o domínio da linguagem C/C++,\n"
                     "E inspira-nos com algoritmos eficientes.\n"
                     "A main!" << std::endl;
    } else if (opcao == "não" || opcao == "Não" || opcao == "NÃO") {
        std::cout << "Opcao 2 selecionada." << std::endl;
    } else {
        std::cout << "Opcao invalida." << std::endl;
    }

    return 0;
}
