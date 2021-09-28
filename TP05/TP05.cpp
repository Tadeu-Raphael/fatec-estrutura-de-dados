#include <iostream>
#include <queue>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    queue<int> lista;
    int valor, dado, cont;

    cont = 0;

    do{
        cout << "Faça a sua escolha!" << endl;
        cout << "1 > Inserir" << endl;
        cout << "2 > Remover" << endl;
        cout << "3 > Primeiro da Fila" << endl;
        cout << "4 > Exibir a Fila" << endl;
        cout << "5 > Sair" << endl;

        cout << "Valor: ";
        cin >> valor;

        switch(valor){

            case 1:
                cout << "Digite seu valor: ";
                cin >> dado;
                lista.push(dado);
                cont++;
                break;

            case 2:
                lista.pop();
                cout << "O valor foi removido com sucesso" << endl;
                break;

            case 3:
                cout << lista.front() << endl;
                break;

            case 4: {
                    int aux[cont];
                    int cont2 = 0;
                    int cont3 = 0;
                    for(cont2=cont;cont2>0;cont2--){
                        cout << "Valor " << cont2 << " : " << lista.front() << endl;
                        aux[cont3] = lista.front();
                        lista.pop();
                        cont3++;
                    }
                    cont3 = 0;
                    for(cont2=cont;cont2>0;cont2--){
                        lista.push(aux[cont3]);
                        cont3++;
                    }
                }break;

            case 5:
                return 1;
                break;

            default:
                cout << "O valor inserido é inválido!" << endl;
        }
    } while(valor != 5);

    return 0;
}
