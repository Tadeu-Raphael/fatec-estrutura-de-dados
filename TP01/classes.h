#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Triangulo {

    public:

        int a;
        int b;
        int c;

        Triangulo(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void analisarTriangulo(){

            if(a < b+c && b < a+c && c < a+b){
                cout << "Esse triangulo é real" << endl;
            } else {
                cout << "Esse triangulo é falso" << endl;
            }

        }

};

// Não achei uma explicação muito boa para aplicar nesse programinha básico da condição de existencia de um quadrilatero
// Então fiz como se fosse um quadrado

class Quadrilatero {

    private:

        int lados;

    public:

        Quadrilatero(int lados){
            this->lados = lados;
        }

        void analisarQuadrilatero(){
            cout << "O seu quadrilatero tem " << this->lados << " de tamanho nos lados" << endl;
        }

};

class Funcionario {

    private:
        string nome;
        string sobrenome;
        int idade;

    public:

        string getNome(){
            return this->nome;
        }

        string getSobrenome(){
            return this->sobrenome;
        }

        int getIdade(){
            return this->idade;
        }

        string setNome(string nome){
            this->nome = nome;
        }

        string setSobrenome(string sobrenome){
            this->sobrenome = sobrenome;
        }

        int setIdade(int idade){
            this->idade = idade;
        }

};

class Livro {

    private:
        string nome;
        int totalPaginas;

    public:

        string setNome(string nome){
            this->nome = nome;
        }

        int setTotalPaginas(int totalPaginas){
            this->totalPaginas = totalPaginas;
        }

        string getNome(){
            return this->nome;
        }

        int getTotalPaginas(){
            return this->totalPaginas;
        }

};

class Onibus {

    private:

        string destino;
        bool isFull;

    public:

        string setDestino(string destino){
            this->destino = destino;
        }

        bool setFull(bool isFull){
            this->isFull = isFull;
        }

        string getDestino(){
            return this->destino;
        }

        bool getFull(){
            return this->isFull;
        }

} ;

class Cilindro {

    private:
        int altura;
        int raio;

    public:

        int setAltura(int altura){
            this->altura = altura;
        }

        int setRaio(int raio){
            this->raio = raio;
        }

        int getAltura(){
            return this->altura;
        }

        int getRaio(){
            return this->raio;
        }

};

class Carro {

    private:
        string marca;
        string modelo;
        int totalPortas;

    public:

        void setMarca(string marca){
            this->marca = marca;
        }

        void setModelo(string modelo){
            this->modelo = modelo;
        }

        void setTotalPortas(int totalPortas){
            this->totalPortas = totalPortas;
        }

        string getMarca(){
            return this->marca;
        }

        string getModelo(){
            return this->modelo;
        }

        int getTotalPortas(){
            return this->totalPortas;
        }

};

class Matriz {

    private:
        int totalDimensoes;
        string tipo;

    public:

        void setTipo(string tipo){
            this->tipo = tipo;
        }

        void setTotalDimensoes(int totalDimensoes){
            this->totalDimensoes = totalDimensoes;
        }

        string getTipo(){
            return this->tipo;
        }

        int getTotalDimensoes(int totalDimensoes){
            return this->totalDimensoes;
        }

};

class Televisao{

    private:
        string marca;
        string canalAtual;
        int totalCanais;

    public:

        void setMarca(string marca){
            this->marca = marca;
        }

        void setCanalAtual(string canalAtual){
            this->canalAtual = canalAtual;
        }

        void setTotalCanais(int totalCanais){
            this->totalCanais = totalCanais;
        }

        string getMarca(){
            return this->marca;
        }

        string getCanalAtual(){
            return this->canalAtual;
        }

        int getTotalCanais(){
            return this->totalCanais;
        }

};

class ArCondicionado {

    private:
        string marca;
        string modoAtual;
        int temperaturaAtual;

    public:

        void setMarca(string marca){
            this->marca = marca;
        }

        void setModoAtual(string modoAtual){
            this->modoAtual = modoAtual;
        }

        void setTemperaturaAtual(int temperaturaAtual){
            this->temperaturaAtual = temperaturaAtual;
        }

        string getMarca(){
            return this->marca;
        }

        string getModoAtual(){
            return this->modoAtual;
        }

        int getTemperaturaAtual(){
            return this->temperaturaAtual;
        }

};


#endif // CLASSES_H_INCLUDED
