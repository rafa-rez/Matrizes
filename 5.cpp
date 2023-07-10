#include <iostream>

using namespace std;

int main()
{
    string expressao;
    cin >> expressao;
    int contador = 0;
    for(int i = 0; expressao[i]; i++)
    {
        if(expressao[i] == '(')
        {
            contador ++;
        } else if (expressao[i] == ')')
        {
            contador--;
        }
        
    }
    if(contador == 0 )
    {
        cout << "parenteses corretos";
    } else if ( contador != 0)
    {
        cout <<  "parenteses incorretos";
    }
}