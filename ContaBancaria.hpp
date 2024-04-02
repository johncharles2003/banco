#ifndef CONTABANCARIA
#define CONTABANCARIA
#include <string>
#include <iostream>

using namespace std;

struct ContaBancaria{
    int id;
    string cliente;
    float valor;

    ContaBancaria(int id,string cliente);
    void deposito(float valor);
    void saque(float valor);
    void pix(ContaBancaria*,float valor);
    void imprime();
};

#endif