#include <iostream>
#include <vector>
using namespace std;

int buscamenor(vector<int>& arr)
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

vector<int> ordenando_por_selecao(vector<int>& arr) {
    vector<int> novo_arr;
    for (int i = 0; i < arr.size(); i++){
        int menor = buscamenor(arr);
        novo_arr.push_back(arr[menor]);
        arr.erase(arr.begin() + menor);
    }
    return novo_arr;
}

int main() {
    vector<int> arr = {5, 3, 6, 2, 10};
    vector<int> sorted_arr = ordenando_por_selecao(arr);
    for (int i = 0; i < sorted_arr.size(); i++) {
        cout << sorted_arr[i] << " ";
    }
}