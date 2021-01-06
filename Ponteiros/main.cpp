/*Crie uma função void zera (int *vet, int n); que recebe como parâmetro 
um vetor vet de elementos inteiros e seu tamanho n. A função deve atribuir 0 à 
todas as posições do vetor.*/

/*Crie uma função int* alocaVetorZerado (int n); que aloca dinamicamente e 
retorna um vetor com n posições para elementos inteiros, com todas as 
posições inicializadas com zero (utilize a função zera para fazer isso).*/

/*Crie um programa (função main) que leia um número inteiro n e utilize sua 
função alocaVetorZerado para criar um vetor vazio com n elementos inteiros. 
Depois, leia cada um dos valores do vetor. Em seguida, utilize obrigatoriamente 
aritmética de ponteiro para imprimir o vetor do final para o começo. 
Por fim, libere toda a memória alocada dinamicamente.*/

#include <iostream>

using namespace std;

void zera(int *vet, int n){
    for(int i = 0; i < n; i++){
        vet[i] = 0;
    }
}

int* alocaVetorZerado(int n){
    int *vet = new int[n];
    zera(vet, n);

    return vet;
}

int main()
{
    int n;
    cout << "Valor do vetor: ";
    cin >> n;

    int *vet = alocaVetorZerado(n);

    int *fim = &vet[n-1];
    while(fim >= vet){
        cout << "Valor: " << *fim << endl;
        fim--;
    }

    delete [] vet;

    return 0;
}
