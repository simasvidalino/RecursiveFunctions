#include <iostream>

float minimo(float a[], int k, int i, int tam, int indice);

using namespace std;

int main()
{
    float vet[] = {1.3, 3, 10.7, -1000.8, 50.1, -2};

    int tam = sizeof(vet)/sizeof(vet[0]);
    cout << "O menor valor do vetor e : " << minimo( vet, 0,  1, tam, 0)<<endl;
    return 0;
}

float minimo(float a[], int k, int i, int tam, int indice)
{
    if(i == tam)
    {
        return a[indice];
    }
    if(a[k]<a[i])
    {
        indice = k;
        return minimo(a, k, i+1, tam, indice);
    }
    else
    {
        indice = i;
        if(i == tam)
        {
            return a[indice];
        }
        return minimo(a, i, i+1, tam, indice);
    }

}
