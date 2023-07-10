#include <iostream>

using namespace std;

int main()
{
    string principal, procurada;

    cin >> principal;
    cin >> procurada;

    int i = 0, j = 0, ocorrencias = 0;
    while(principal[i] != '\0')
    {
        while (principal[i] == procurada[j] and procurada[j] != 0 )
        {
            i++;
            j++;
        }
            if (procurada[j] == '\0');
        {
       ocorrencias++;
        }
        i++;
    }

    cout << ocorrencias;
        

}