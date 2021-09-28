#include <iostream>
#include <stack>
#include <cstring>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    string expressao;
    int i;
    char simbolo;
    bool valido;
    stack<char> pilha;

    cin >> expressao;
    i = 0;
    valido = true;

    while(i < expressao.length()){
        simbolo = expressao[i];
        if(simbolo == '{' || simbolo == '[' || simbolo == '('){
            pilha.push(simbolo);
        } else if(simbolo == '}' || simbolo == ']' || simbolo == ')'){
            if(pilha.empty()){
                valido = false;
            } else if (simbolo == '}' && pilha.top() == '{'){
                pilha.pop();
            } else if (simbolo == ']' && pilha.top() == '['){
                pilha.pop();
            } else if (simbolo == ')' && pilha.top() == '('){
                pilha.pop();
            } else {
                break;
            }
        }
        i++;
    }

    if(pilha.empty()){
        cout << "Expressão correta" << endl;
    } else{
        cout << "Expressão incorreta" << endl;
    }


    return 0;
}
