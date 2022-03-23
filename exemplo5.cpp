#include <iostream>
#include <cstdlib>      
#include <ctime>       

// ***********************************************
// ***********************************************

int main() {

int valor,
    somatorio = 0;

    srand ( time(NULL) );

    std::cout << "Gerando " << 100 << " valores aleatorios..." << std::endl;

    for (int i = 0; i < 100; i++) {
        valor = rand() % 100;
        somatorio += valor;

        std::cout << "[ " << i << " ] = " << valor << std::endl;
        }
        
    std::cout << "Soma de todos os valores = " << somatorio << std::endl;

    return 0;
}
