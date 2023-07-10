#include <iostream>

using namespace std;

bool vogal(char letra)
{
    if(letra == 'A'|| letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        return true;
    }
    return false;
}

int main()
{
// declarando toda a situação
int tamanho;
cin >> tamanho;
char matriz [tamanho][tamanho];

// lendo os valores da matriz

for(int i = 0; i <tamanho; i ++)
{
    for(int j =0; j <tamanho; j++)
    {
        cin >> matriz[i][j];
    }
}   
    bool achou = false;
    for(int i = 0; i < tamanho - 1; i++)
    {
        for(int j = 0; j < tamanho - 1; j++)
        {
            if(vogal(matriz[i][j]) and vogal(matriz[i+1][j]) and vogal(matriz[i][j+1]) and vogal(matriz[i+1][j+1])){
                cout << matriz[i][j] << " " << matriz[i][j + 1] << endl;
                cout << matriz[i + 1][j] << " " << matriz[i+1][j+1];
                achou = true;
            }
        }
    }
    if(!achou)
    {
        cout << "submatriz nao encontrada";
    }

}