#include <iostream>

using namespace std;

int main()
{   
    // mamatita con acuçarzito
    int tamanho, maior;
    cin >> tamanho;

    int aster[tamanho];

    string vetor[tamanho];
    
    for(int i = 0; i < tamanho; i++)
    {
        cin >> vetor[i];
    }

    maior = vetor[0].size();
    for (int i = 1; i < tamanho; i++)
    {
        if(vetor[i].size() > maior)
        {
            maior = vetor[i].size();
        }
    }
    
    // raciocinitito

    for(int i = 0; i < tamanho; i ++)
    {   
        aster[i] = maior - vetor[i].size();
        //cout << vetor[i] << endl;
    }

    for (int i = 0; i < tamanho; i++)
    {
        for(int j = 0; j < aster[i]; j++)
        {
            cout << "*";
        }
        cout << vetor[i] << endl;
    }
    





}