#include <iostream>

using namespace std;

int main ()
{
    // declarando as paradinhas
    int tamanho;
    // cout << "Tamanho: ";
    cin >> tamanho;

    string vetor[tamanho], maisLetras;
    // cout << "Palavras:" << endl;
    
    for(int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    char letra;
    // cout << "Letra: ";
    cin >> letra;

    // raciocinio
    int contador, maiorcont = 0;
    for(int i = 0; i < tamanho; i++)
    {
        contador = 0;
        for(int j = 0; vetor[i][j]; j++)
        {
            if( vetor[i][j] == letra)
            {
                contador++;
                if(contador >= maiorcont)
                {
                    maiorcont = contador;
                    maisLetras = vetor[i];
                }
            }
        }
    }
    cout << maisLetras;
}