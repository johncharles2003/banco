#include <iostream>
#include <string>
#include "ContaBancaria.hpp"
#include "Banco.hpp"


    ContaBancaria::ContaBancaria(int id,string cliente){
        this->id = id;
        this->cliente = cliente;
        this->valor = 0.0;
    }

    void ContaBancaria::deposito(float valor){
        this->valor += valor;
    }

    void ContaBancaria::saque(float valor){
        this->valor -= valor;
    }

    void ContaBancaria::pix(ContaBancaria* conta2,float valor){
        this->valor -= valor;
        conta2->valor += valor;
    }

    void ContaBancaria::imprime(){
        cout << fixed;
        cout.precision(2);

        cout << this->id << " " << this->cliente << " " << this->valor << endl;
    }

