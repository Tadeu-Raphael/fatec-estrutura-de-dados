#include <iostream>
#include <deque>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    deque<int> duplafila;
    int escolha, valor;

    do{
        cout << "Escolha o que fazer! - Apenas Inteiros" << endl;
        cout << "1 > Inserir no final da fila" << endl;
        cout << "2 > Inserir no inicio da fila" << endl;
        cout << "3 > Remove do início da fila" << endl;
        cout << "4 > Remove do final da fila" << endl;
        cout << "5 > Primeiro Elemento" << endl;
        cout << "6 > Ultimo Elemento" << endl;
        cout << "7 > Sair" << endl;

        cin >> escolha;

        switch(escolha){

            case 1:
                cout << "Digite o valor: ";
                cin >> valor;
                duplafila.push_back(valor);
                break;

            case 2:
                cout << "Digite o valor";
                cin >> valor;
                duplafila.push_front(valor);
                break;

            case 3:
                duplafila.pop_front();
                cout << "Valor foi removido do início" << endl;
                break;

            case 4:
                duplafila.pop_back();
                cout << "Valor foi removido do final" << endl;
                break;

            case 5:
                cout << "O primeiro elemento é: " << duplafila.front() << endl;
                break;

            case 6:
                cout << "O ultimo elemento é: " << duplafila.back() << endl;
                break;

            case 7:
                return 1;
                break;

            default:
                cout << "O valor inserido não é válido" << endl;
        }

    } while(escolha != 7);

    return 0;
}
