#include <iostream>

using namespace std;



int main()
{
    string procurada, maisLetras;
    //cout << "Informe a palavra a ser procurada: ";
    cin >> procurada;

    int n;
    //cout << "Informe o tamanho do vetor de palavras: ";
    cin >> n;

    string vetor[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }

    int contador, maiorcontador = 0;

    for (int j = 0; j < n; j++)
    {
        contador = 0;

        for (int i = 0; i < 5; i++)
        {
            if (vetor[j][i] == procurada[i])
            {  
                contador++;
                if(contador >= maiorcontador)
                {
                maiorcontador = contador;
                maisLetras = vetor[j];
                }
            }
        
        }        
    }
    
    cout << maisLetras;
    
}