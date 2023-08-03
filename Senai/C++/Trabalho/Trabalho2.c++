#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> lista_de_compras;
    int opcao;

    do {
        std::cout << "========= Menu =========" << std::endl;
        std::cout << "1. Adicionar Item" << std::endl;
        std::cout << "2. Remover Item" << std::endl;
        std::cout << "3. Visualizar Lista" << std::endl;
        std::cout << "4. Sair" << std::endl;
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1: {
                std::string item;
                std::cout << "Digite o nome do item a adicionar: ";
                std::cin.ignore(); // Limpar o buffer do teclado
                std::getline(std::cin, item);
                lista_de_compras.push_back(item);
                std::cout << "Item adicionado com sucesso!" << std::endl;
                break;
            }
            case 2: {
                if (lista_de_compras.empty()) {
                    std::cout << "A lista de compras está vazia." << std::endl;
                } else {
                    std::string item;
                    std::cout << "Digite o nome do item a remover: ";
                    std::cin.ignore(); // Limpar o buffer do teclado
                    std::getline(std::cin, item);

                    bool item_encontrado = false;
                    for (size_t i = 0; i < lista_de_compras.size(); ++i) {
                        if (lista_de_compras[i] == item) {
                            lista_de_compras.erase(lista_de_compras.begin() + i);
                            item_encontrado = true;
                            std::cout << "Item removido com sucesso!" << std::endl;
                            break;
                        }
                    }

                    if (!item_encontrado) {
                        std::cout << "Item não encontrado na lista." << std::endl;
                    }
                }
                break;
            }
            case 3: {
                if (lista_de_compras.empty()) {
                    std::cout << "A lista de compras está vazia." << std::endl;
                } else {
                    std::cout << "======== Lista de Compras ========" << std::endl;
                    for (const auto& item : lista_de_compras) {
                        std::cout << "- " << item << std::endl;
                    }
                }
                break;
            }
            case 4: {
                std::cout << "Saindo do programa..." << std::endl;
                break;
            }
            default: {
                std::cout << "Opção inválida. Por favor, tente novamente." << std::endl;
                break;
            }
        }

        std::cout << std::endl;
    } while (opcao != 4);

    return 0;
}
