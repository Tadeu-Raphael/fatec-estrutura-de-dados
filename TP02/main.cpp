#include <iostream>
#include <locale.h>
#include "teatro.h"

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    int comprimento, largura;
    int escolha, valor_x, valor_y, valor_x_antigo, valor_y_antigo;

    cout << "Defina o tamanho de comprimento e largura do teatro!" << endl;
    cout << "LIMITE: 100x100" << endl;

    cout << "Comprimento: ";
    cin >> comprimento;

    cout << "Largura: ";
    cin >> largura;

    Teatro principal(comprimento, largura);
    principal.inicializarTeatro();

    do{
        cout << "\nO que você gostaria de fazer agora?" << endl;
        cout << "1 > Reservar um lugar" << endl;
        cout << "2 > Devolver um lugar" << endl;
        cout << "3 > Trocar de lugar" << endl;
        cout << "4 > Visualizar teatro" << endl;
        cout << "5 > Sair" << endl;

        cout << "Valor: ";
        cin >> escolha;

        switch(escolha){

            case 1:
                cout << "Valor em X: ";
                cin >> valor_x;
                cout << "Valor em Y: ";
                cin >> valor_y;
                principal.reservarLugar(valor_x, valor_y);
                break;

            case 2:
                cout << "Valor em X: ";
                cin >> valor_x;
                cout << "Valor em Y: ";
                cin >> valor_y;
                principal.devolverReserva(valor_x, valor_y);
                break;

            case 3:
                cout << "Valor antigo em X: ";
                cin >> valor_x_antigo;
                cout << "Valor antigo em Y: ";
                cin >> valor_y_antigo;
                cout << "Valor novo em X: ";
                cin >> valor_x;
                cout << "Valor novo em Y: ";
                cin >> valor_y;
                principal.trocarLugar(valor_x_antigo, valor_y_antigo, valor_x, valor_y);
                break;

            case 4:
                principal.visualizarVendas();
                break;

            case 5:
                return 1;

            default:
                cout << "O valor digitado não era válido!" << endl;
        }
    } while(escolha != 5);


    return 0;
}
