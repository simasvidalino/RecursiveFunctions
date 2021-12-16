#include <iostream>

float media(float a[], int indice, int tam);

using namespace std;

int main()
{
    float vet[] = {1.3, 3, 10.7, -1000.8, 50.1, -2};

    int tam = sizeof(vet)/sizeof(vet[0]);
    cout << "A media do valores do vetor e : " << media(vet, 0, tam)<<endl;
    return 0;
}
float media(float a[], int indice, int tam)
{
       float soma = 0;
       if(indice == tam)
       {
           return soma;
       }
       soma = a[indice]/tam;
       return soma + media(a, indice+1, tam);
}
