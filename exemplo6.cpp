#include <iostream>
#include <cstdlib>      
#include <ctime>       

#define MAX 20

// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

int V[MAX],
    numElem;

    std::cout << "Executando o programa " << argv[0] << std::endl;

    if (argc > 1)
        numElem = atoi(argv[1]);
    else
        numElem = MAX;

    srand ( time(NULL) );

    std::cout << "Gerando valores aleatorios..." << std::endl;

    for (int i = 0; i < numElem; i++) 
        V[i] = rand() % 100;
               
    std::cout << "Valores gerados!" << std::endl;

    for (int i = 0; i < numElem; i++) {
        std::cout << "V[ " << i << " ] = " << V[i] << std::endl;
        }

    // Calcular a media

    // Calcular o desvio padrao

    // calcular o maior e o menor valor do conjunto

    // Inverter o conteudo do vetor
    
    return 0;
}
