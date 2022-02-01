#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:
		std::string Endereco;
		std::string Nome;
		std::string Cep;
		
	public:
		std::string getNome();
		std::string getEndereco();
		std::string getCep();

		~Cliente();

		Cliente(std::string Nome,
		std::string Endereco,
		std::string Cep);

		void Print(); // imprime na tela os dados de um cliente cadastrado

};

#endif