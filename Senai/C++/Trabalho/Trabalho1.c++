#include <iostream>
#include <string>
#include <vector>

struct Cliente {
    int id;
    std::string nome;
    std::string email;
};

// Função para adicionar um novo cliente à base de dados
void adicionarCliente(std::vector<Cliente>& clientes) {
    Cliente novoCliente;
    std::cout << "Digite o ID do cliente: ";
    std::cin >> novoCliente.id;
    std::cout << "Digite o nome do cliente: ";
    std::cin.ignore(); // Ignorar o '\n' residual do cin anterior
    std::getline(std::cin, novoCliente.nome);
    std::cout << "Digite o email do cliente: ";
    std::getline(std::cin, novoCliente.email);
    clientes.push_back(novoCliente);
    std::cout << "Cliente adicionado com sucesso!\n";
}

// Função para remover um cliente da base de dados pelo ID
void removerCliente(std::vector<Cliente>& clientes) {
    int id;
    std::cout << "Digite o ID do cliente que deseja remover: ";
    std::cin >> id;

    bool clienteRemovido = false;
    for (auto it = clientes.begin(); it != clientes.end(); ++it) {
        if (it->id == id) {
            clientes.erase(it);
            clienteRemovido = true;
            break;
        }
    }

    if (clienteRemovido) {
        std::cout << "Cliente removido com sucesso!\n";
    } else {
        std::cout << "Cliente com o ID especificado não encontrado!\n";
    }
}

// Função para consultar um cliente na base de dados pelo ID
void consultarCliente(const std::vector<Cliente>& clientes) {
    int id;
    std::cout << "Digite o ID do cliente que deseja consultar: ";
    std::cin >> id;

    bool clienteEncontrado = false;
    for (const auto& cliente : clientes) {
        if (cliente.id == id) {
            std::cout << "ID: " << cliente.id << "\n";
            std::cout << "Nome: " << cliente.nome << "\n";
            std::cout << "Email: " << cliente.email << "\n";
            clienteEncontrado = true;
            break;
        }
    }

    if (!clienteEncontrado) {
        std::cout << "Cliente com o ID especificado não encontrado!\n";
    }
}

int main() {
    std::vector<Cliente> clientes;
    int escolha;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Adicionar Cliente\n";
        std::cout << "2. Remover Cliente\n";
        std::cout << "3. Consultar Cliente\n";
        std::cout << "0. Sair\n";
        std::cout << "Escolha a opção desejada: ";
        std::cin >> escolha;

        switch (escolha) {
            case 1:
                adicionarCliente(clientes);
                break;
            case 2:
                removerCliente(clientes);
                break;
            case 3:
                consultarCliente(clientes);
                break;
            case 0:
                std::cout << "Encerrando o programa...\n";
                break;
            default:
                std::cout << "Opção inválida! Tente novamente.\n";
                break;
        }

    } while (escolha != 0);

    return 0;
}
