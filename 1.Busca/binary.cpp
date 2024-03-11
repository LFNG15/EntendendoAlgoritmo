#include <iostream>
#include <vector>
using namespace std;

int busca_binaria(vector<int> &lst, int item)
{
    int baixo = 0;
    int alto = lst.size() - 1;

    while (baixo <= alto)
    {
        int meio = (alto + baixo) / 2;
        int palpite = lst[meio];

        if (palpite == item)
        {
            return meio;
        }

        if (palpite > item)
        {
            alto = meio - 1;
        }
        else
        {
            baixo = meio + 1;
        }
    }

    return -1;
}

int main() {
    vector<int> number_list = {1, 3, 5, 7, 9};
    cout << busca_binaria(number_list, 3) << endl;
    cout << busca_binaria(number_list, -1) << endl;
}