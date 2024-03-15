#include <iostream>
#include <stack>

void procure(caixa) {
    std::stack<caixa> pilha;
    while (!pilha.empty()) {
        caixa = pilha.top();
        pilha.pop();
        for (auto item : caixa) {
            if (item.e_uma_caixa()) {
                pilha.push(item);
            } else if (item.e_uma_chave()) {
                std::cout << "Achei a chave!" << std::endl;
            }
        }
    }
}
int main(){

}