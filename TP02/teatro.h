#ifndef TEATRO_H_INCLUDED
#define TEATRO_H_INCLUDED

using namespace std;

class Teatro{

    private:
        int comprimento;
        int largura;
        bool teatro[100][100];

    public:
        Teatro(int comprimento, int largura){
            this->comprimento = comprimento;
            this->largura = largura;
        }

        void inicializarTeatro(){
            int cont1, cont2;
            for(cont1=0;cont1<100; cont1++){
                for(cont2=0; cont2<100;cont2++){
                    this->teatro[cont1][cont2] = false;
                }
            }
        }

        void reservarLugar(int x, int y){
            if(teatro[x-1][y-1] == true){
                cout << "Esse lugar já está reservado por outra pessoa" << endl;
            } else {
                teatro[x-1][y-1] = true;
                cout << "Local reservado com sucesso!" << endl;
            }
        }

        void devolverReserva(int x, int y){
            if(teatro[x-1][y-1] == false){
                cout << "Esse lugar não foi reservado" << endl;
            } else {
                teatro[x-1][y-1] = false;
                cout << "Seu ingresso foi devolvido" << endl;
            }
        }

        void trocarLugar(int x1, int y1, int x2, int y2){
            if(teatro[x1-1][y1-1] == false){
                cout << "O local de início não foi alugado" << endl;
            } else if(teatro[x2-1][y2-1] == true){
                cout << "O local final já está alugado" << endl;
            } else {
                teatro[x1-1][y1-1] = false;
                teatro[x2-1][x2-1] = true;
                cout << "A mudança foi feita" << endl;
            }
        }

        void visualizarVendas(){
            for(int cont1 = 0; cont1 < this->comprimento; cont1++){
                for(int cont2 = 0; cont2 < this->largura; cont2++){
                    cout << "O local " << cont1+1 << " x " << cont2+1 << " esta: " << teatro[cont1][cont2] << endl;
                }
            }
        }
};

#endif // TEATRO_H_INCLUDED
