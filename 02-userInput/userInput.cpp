#include <iostream>

// cout << (inserção)
// cin >> (extração)

int main()
{
    std::string nome = "";
    int idade = 0;

    std::cout << "Digite seu nome completo:" << "\n";
    std::getline(std::cin >> std::ws, nome);
    std::cout << "Digite sua idade:" << "\n";
    std::cin >> idade;

    std::cout << "Nome da pessoa: " << nome << "\n";
    std::cout << "Idade da pessoa: " << idade << "\n";
    return 0;
}