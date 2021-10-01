#ifndef LOSANGO_H_INCLUDED
#define LOSANGO_H_INCLUDED
#include <math.h>

class Losango {

    private:
        int diagonalMenor;
        int diagonalMaior;
        int lado;
        int perimetro;
        int area;

    public:

        Losango(int diagonalMenor, int diagonalMaior){
            this->diagonalMenor = diagonalMenor;
            this->diagonalMaior = diagonalMaior;
        }

        int calcLado(){
            this->lado = pow( pow((this->diagonalMenor / 2), 2) + pow((this->diagonalMaior / 2), 2), 2);
            return this->lado;
        }

        int calcPerimetro(){
            this->perimetro = 4 * this->lado;
            return this->perimetro;
        }

        int calcArea(){
            this->area = (this->diagonalMenor * this->diagonalMaior) / 2;
            return this->area;
        }

};

#endif // LOSANGO_H_INCLUDED
