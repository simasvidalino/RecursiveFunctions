#include <iostream>

int fatorial (int n); //prototipagem
using namespace std;

int main()
{
    int n, m=0;

    cout<<"Entre com uma valor positivo para calcular o fatorial\n";
    cin>>n;

    if(n<0)
    {
        cout<<"Digite um numero valido!\n";
        return 0;
    }

   while(m <= n)
   {
       cout<<"Fatorial de : "<<m<<" = "<< fatorial(m)<<endl;
       m++;
   }

    return 0;
}

int fatorial (int n)
{
    if (n<=0)
    {
        return 1;
    }
    return n*fatorial(n-1); //para cada fator tem um retorno armazenado em conteiner
}
