#include <iostream>
#include <string>
#include <vector>

#define n 3

struct Produto
{
	std::string nome;
	int quantidade;
};

void listar(std::vector<Produto> const &v);
void adicionar(std::vector<Produto> &v);
void remover(std::vector<Produto> &v);

int main()
{
	std::vector<Produto> v;

	std::string input;
	std::cout << "O que deseja fazer? (adicionar, remover, listar, sair): ";

	getline(std::cin, input);
	while (input != "sair")
	{
		if (input == "adicionar")
		{
			adicionar(v);
		}
		else if (input == "remover")
		{
			remover(v);
		}
		else if (input == "listar")
		{
			listar(v);
		}
		else
		{
			std::cout << "Comando inválido" << std::endl;
		}
		std::cout << "O que deseja fazer? (adicionar, remover, listar, sair): ";
		getline(std::cin, input);
	}
}
void listar(std::vector<Produto> const &v)
{
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << "Produto " << i + 1 << ": " << v[i].nome << " - " << v[i].quantidade << std::endl;
	}
}

void adicionar(std::vector<Produto> &v)
{
	Produto p;
	std::cout << "Digite o nome do produto: ";
	getline(std::cin, p.nome);

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].nome == p.nome)
		{
			std::cout << "Foram encontrados " << v[i].quantidade << " " << p.nome << " no estoque" << std::endl;
			std::cout << "Digite a quantidade que deseja adicionar: ";
			int qtd;
			std::cin >> qtd;

			v[i].quantidade += qtd;

			return;
		}
	}
	std::cout << "Não existe " << p.nome << " no estoque" << std::endl;
	std::cout << "Digite a quantidade de " << p.nome << " que deseja adicionar: ";
	std::cin >> p.quantidade;
	std::cout << "Produto adicionado" << p.quantidade << std::endl;
	v.push_back(p);
}

void remover(std::vector<Produto> &v)
{
	Produto p;
	std::cout << "Digite o nome do produto que deseja remover: ";
	getline(std::cin, p.nome);
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].nome == p.nome)
		{
			std::cout << "Foram encontrados " << v[i].quantidade << " " << p.nome << " no estoque" << std::endl;
			std::cout << "Digite a quantidade que deseja remover: ";
			std::cin >> p.quantidade;
			if (p.quantidade > v[i].quantidade)
			{
				std::cout << "Não é possível remover mais do que o estoque possui" << std::endl;
				return;
			}
			else if (p.quantidade == v[i].quantidade)
			{
				v.erase(v.begin() + i);
				std::cout << "Produtos removidos" << std::endl;
				return;
			}
			else
			{
				v[i].quantidade -= p.quantidade;
				std::cout << "Produtos removidos" << std::endl;
				return;
			}
		}
	}
		std::cout << "Produto não encontrado" << std::endl;

}