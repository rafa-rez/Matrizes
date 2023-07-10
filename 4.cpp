#include <iostream>

using namespace std;

int main()
{
    // declarando cariáveis e recebendo valores necessários para o código
    int tamanho;
    cin >> tamanho;

    string vetor[tamanho];

    for(int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    char letra;
    cin >> letra;

    // raciocinio

    int size, cont, palavraschatas = 0;
    for(int i = 0; i < tamanho; i++)
    {   
        cont = 0;
        size = vetor[i].size();

        for(int j = 0; vetor[i][j]; j++)
        {
            
            for(int k = 0; k < size; k ++)
            {
                
                if(vetor[i][j] != letra)
                {
                    cont++;
                }
            }
            
        }
        if (cont == size)
            {
                palavraschatas++;
            }
        
    }

    cout << endl << palavraschatas;
}