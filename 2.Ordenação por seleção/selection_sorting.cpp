#include <iostream>
#include <vector>
using namespace std;

int buscamenor(vector<int>% arr)
{
    int menor = arr[0];
    int menor_indice = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < menor)
        {
            menor = arr[i];
            menor_indice = i;
        }
    }
    return menor_indice;
}