#include <iostream>
#include <locale.h>
#include <stack>
#include <queue>
#include "losango.h"

#define ex1

//Observação ex1: Só funciona caso a lista seja realimentada após mostrar todos os itens no item 2. Tentei fazer algo que não precisasse
//                mas o tempo é muito curto para deixar redondo.

//Observação ex2: Os valores retornados são em int, inserir adiciona um item na fila, e remover remove o primeiro item.

using namespace std;

#ifdef ex1

int main()
{

    setlocale(LC_ALL, "");

    int escolha, valor;

    stack<int> pilha;
    queue<int> fila;

    do{
        cout << "Seja bem vindo ao programa!" << endl;
        cout << "1 > Inserir dados" << endl;
        cout << "2 > Exibir pilha" << endl;
        cout << "3 > Desempilhar e passar para a fila" << endl;
        cout << "4 > Exibir a fila" << endl;
        cout << "5 > Sair" << endl;

        cout << "Escolha: ";
        cin >> escolha;

        switch(escolha){

            case 1:
                cout << "Insira o dado na pilha: ";
                cin >> valor;
                pilha.push(valor);
                break;

            case 2:
                while(pilha.empty() == false){
                    cout << pilha.top() << endl;
                    pilha.pop();
                }
                break;

            case 3:
                while(pilha.empty() == false){
                    if(pilha.top() % 3 == 0){
                        fila.push(pilha.top());
                    }
                    pilha.pop();
                }
                cout << "Desempilhado e transferido com sucesso!" << endl;
                break;

            case 4:
                while(fila.empty() == false){
                    cout << fila.front() << endl;
                    fila.pop();
                }

                break;

            case 5:
                return 1;

            default:
                cout << "O dado inserido é invalido" << endl;

        }
    } while(escolha != 5);

    return 0;
}

#endif // ex1

#ifdef ex2

int main()
{

    setlocale(LC_ALL, "");

    int escolha;
    int diagonalMenor, diagonalMaior;

    queue<Losango> fila;


    do{
        cout << "Bem vindo ao programa!" << endl;
        cout << "1 > Inserir" << endl;
        cout << "2 > Remover" << endl;
        cout << "3 > Exibir todos os dados do losango" << endl;
        cout << "4 > Sair" << endl;

        cout << "Escolha: ";
        cin >> escolha;

        switch(escolha){

            case 1: {
                cout << "Digite as diagonais dos losangos" << endl;

                cout << "Diagonal Menor: ";
                cin >> diagonalMenor;
                cout << "Diagonal Maior: ";
                cin >> diagonalMaior;

                Losango losango(diagonalMenor, diagonalMaior);

                fila.push(losango);

                }

                break;

            case 2:

                fila.pop();
                cout << "Losango Removido!" << endl;

                break;

            case 3:

                while(fila.empty() == false){

                    cout << "\nLado: ";
                    cout << fila.front().calcLado() << endl;

                    cout << "Perimetro: ";
                    cout << fila.front().calcPerimetro() <<endl;

                    cout << "Area: ";
                    cout << fila.front().calcArea() <<endl;

                    fila.pop();

                }

                break;

            case 4:
                return 1;
                break;

            default:
                cout << "O valor é invalido!" << endl;

        }
    }while(escolha != 5);

    return 0;
}

#endif // ex2
