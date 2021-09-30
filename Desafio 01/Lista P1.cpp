#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <locale.h>

using namespace std;

#define ex4

#ifdef ex4
int main()
{

    setlocale(LC_ALL, "");

    queue<int> lista;

    //01
    lista.push(5);
    //02
    lista.push(8);
    //03
    lista.push(2);
    //04
    lista.push(lista.front());  lista.pop();
    //05
    lista.pop();
    //06
    lista.push(lista.front());  lista.pop();
    //07
    lista.pop();
    //08
    lista.push(1);
    //09
    lista.pop();
    //10
    lista.push(lista.front());  lista.pop();
    //11
    lista.push(lista.front());  lista.pop();
    //12
    lista.push(lista.front());  lista.pop();
    //13
    lista.push(3);
    //14
    lista.push(lista.front());  lista.pop();
    //15
    lista.push(3);

    int cont = 1;

    while(lista.empty() == false){
        cout << "O item " << cont << " é: " << lista.front() << endl;
        lista.pop();
        cont = cont+1;
    }

    return 0;
}

#endif // ex4

#ifdef ex5

int main(){

    setlocale(LC_ALL, "");

    stack<int> pilha;

    //01
    pilha.push(1);
    //02
    pilha.push(5);
    //03
    pilha.pop();
    //04
    pilha.push(5);
    //05
    pilha.push(9);
    //06
    pilha.push(7);
    //07
    pilha.push(pilha.top());
    //08
    pilha.pop();
    //09
    pilha.push(pilha.top()); pilha.pop();
    //10
    pilha.push(4);
    //11
    pilha.push(3);
    //12
    pilha.push(8);

    int cont = 1;

    while(pilha.empty() == false){
        cout << "O item " << cont << " é: " << pilha.top() << endl;
        pilha.pop();
        cont = cont+1;
    }

    return 0;
}

#endif // ex5

#ifdef ex6

int main(){

    setlocale(LC_ALL, "");

    int valor, aux, aux2, cont = 0;
    stack<int> pilha;

    cout << "Digite um número e iremos devolver o valor em binário" << endl;
    cout << "Valor: ";
    cin >> valor;

    aux2 = valor;

    while(aux2 != 0 && aux2 != 1){
        aux2 = aux2 / 2;
        cont++;
    }

    do{
        aux = valor % 2;
        valor = valor / 2;
        pilha.push(aux);
        cont--;
    } while(cont>-1);

    cout << "O numero é: ";

    while(pilha.empty() == false){
        cout << pilha.top();
        pilha.pop();
    }

    return 0;
}

#endif // ex6

#ifdef ex7

int main(){

    int escolha, valor;

    stack<int> pilha;
    queue<int> fila;

    do{
        cout << "Bem vindo ao programa!" << endl;
        cout << "1 > Inserir dados na lista" << endl;
        cout << "2 > Transferir para pilha" << endl;
        cout << "3 > Sair" << endl;

        cout << "Escolha: ";
        cin >> escolha;

        switch(escolha){

            case 1:
                cout << "Digite o valor a ser inserido" << endl;
                cout << "Valor: ";
                cin >> valor;
                fila.push(valor);
                break;

            case 2:
                while(fila.empty() == false){
                    pilha.push(fila.front());
                    fila.pop();
                }
                while(pilha.empty() == false){
                    cout << pilha.top() << endl;
                    pilha.pop();
                }
                break;

            case 3:
                return 1;

            default:
                cout << "O valor digitado não é valido!" << endl;
        }
    } while(escolha != 3);

    return 0;
}

#endif // ex7

#ifdef ex8

int main(){

        queue<char> alfabeto;
        queue<char> aux;

        char alfabetoVetor[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                                'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',};

        for(int cont=0; cont<26; cont++){
            alfabeto.push(alfabetoVetor[cont]);
        }

        setlocale(LC_ALL, "");

        std::string frase;
        int tamanhoFrase;
        queue<char> fila;

        cout << "Digite uma frase e diremos se é um pangrama" << endl;

        cout << "Frase: ";
        std::getline(std::cin, frase);

        tamanhoFrase = frase.length();

        int cont, aux2 = 0;

        for(cont=0;cont<tamanhoFrase; cont++){
            fila.push(frase[cont]);
        }

        while(fila.empty() == false){
            for(int cont=0;cont<26;cont++){
                if(alfabeto.empty() == true){
                    if(fila.front() == aux.front()){
                        aux.pop();
                        aux2++;
                        break;
                    }
                    alfabeto.push(aux.front());
                    aux.pop();
                } else {
                    if(fila.front() == alfabeto.front()){
                        alfabeto.pop();
                        aux2++;
                        break;
                    }
                    aux.push(alfabeto.front());
                    alfabeto.pop();
                   }
            }
            fila.pop();
        }

        if(aux2 == 26){
            cout << "A frase é um pangrama" << endl;
        } else {
            cout << "A frase não é um pangrama" << endl;
        }

    return 0;
}

#endif // ex8
