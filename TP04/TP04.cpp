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
        cout << "3 > Remove do in�cio da fila" << endl;
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
                cout << "Valor foi removido do in�cio" << endl;
                break;

            case 4:
                duplafila.pop_back();
                cout << "Valor foi removido do final" << endl;
                break;

            case 5:
                cout << "O primeiro elemento �: " << duplafila.front() << endl;
                break;

            case 6:
                cout << "O ultimo elemento �: " << duplafila.back() << endl;
                break;

            case 7:
                return 1;
                break;

            default:
                cout << "O valor inserido n�o � v�lido" << endl;
        }

    } while(escolha != 7);

    return 0;
}
