#ifndef BANCO 
#define BANCO 
#include "ContaBancaria.hpp"
#include <string>

using namespace std;

struct Banco{
    int contas;
    ContaBancaria* vetor[20];
    int i;

    Banco();
    ContaBancaria* CriaConta(int id,string cliente);
    ContaBancaria* Pesquisa(int id);
    void ListaContas();
};

#endif