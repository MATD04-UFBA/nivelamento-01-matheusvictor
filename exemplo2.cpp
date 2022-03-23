#include <iostream>

int main(void) {

int valor;


	std::cout << "Digite um valor entre 0 e 2:  ";	
	std::cin >> valor;

	switch(valor){
		case 0:		std::cout << "Valor e igual a 0" << std::endl;
					break;
		case 1:		std::cout << "Valor e igual a 1" << std::endl;
					break;
		case 2:		std::cout << "Valor e igual a 2" << std::endl;
					break;
		default:	std::cout << "Valor digitado fora do intervalo solicitado" << std::endl;
		}

	return 0;
}
