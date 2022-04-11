#include <iostream>
#include <cstdlib> 
#include <iomanip>
#include <math.h>       /* sqrt */

#include <ctime>  

using namespace std;

#define MAX 3

// ***********************************************
// ***********************************************

int main(int argc, char** argv) {

    int V[MAX],
        numElem;

    cout << "Executando o programa " << argv[0] << std::endl;

    if (argc > 1)
        numElem = atoi(argv[1]);
    else
        numElem = MAX;

    srand ( time(NULL) );

    cout << "Gerando valores aleatorios..." << endl;

    for (int i = 0; i < numElem; i++) 
        V[i] = rand() % 100;
               
    cout << "Valores gerados!" << endl;

    int somaNumerosGerados = 0; 

    for (int i = 0; i < numElem; i++) {
        cout << "V[ " << i << " ] = " << V[i] << endl;
        // Somando todos números gerados:
        somaNumerosGerados += V[i];        
    }

    // Calcular a media
    float media = (somaNumerosGerados / size(V)) * 1.0;
    float mediaDecimal = (somaNumerosGerados / size(V)) * 1.0;
    
    cout << "Media (arredondada) dos numeros gerados: " << fixed << setprecision(2) << media << endl;
    cout << "Media (com dupla precisao) dos numeros gerados: " << fixed << setprecision(2) << mediaDecimal << endl;

    // Calcular o desvio padrao    
    int somatorio = 0;    
    float desvioPadrao = 0.0;

    for (int i = 0; i < numElem; i++) {
        int distancia = V[i] - media;
        int quadradoDistancia = distancia * distancia;
    
        // cout << distancia << endl;
        // cout << quadradoDistancia << endl;
    
        somatorio += quadradoDistancia;       
        desvioPadrao = sqrt(somatorio/size(V));
        
    }

    // cout << "somatorio" << somatorio << endl;
    cout << "Desvio padrao (DP) da populacao: " << desvioPadrao << endl;

    // calcular o maior e o menor valor do conjunto
    int maior,
        menor = 0;

    for (int i = 0; i < numElem; i++) {

        if(i == 0){
            maior = menor = V[i];
        } else{        
            if(V[i] > maior){
                maior = V[i];
            }

            if(V[i] < menor){
                menor = V[i];
            }
        }                   
    }

    cout << "Maior valor do conjunto: " << maior << endl;
    cout << "Menor valor do conjunto: " << menor << endl;

    // Inverter o conteudo do vetor
    
    return 0;
}
