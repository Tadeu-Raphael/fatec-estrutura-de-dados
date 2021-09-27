#include <iostream>
#include <locale.h>
#include "classes.h"

using namespace std;

int main()
{

    setlocale(LC_ALL, "");

    cout << "Bem vindo ao programa" << endl;

    Triangulo triangulo1(5,7,9);
    triangulo1.analisarTriangulo();

    Quadrilatero quadrado1(10);
    quadrado1.analisarQuadrilatero();

    //...Parei de fazer os testes pois o exercício apenas pedia o arquivo classes.h

    return 0;

}
