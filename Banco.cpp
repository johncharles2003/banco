#include <iostream>
#include <string>
#include "Banco.hpp"
#include "ContaBancaria.hpp"

using namespace std;

    Banco::Banco(){
        contas=0.0;
        for(int i=0;i<=19;i++){
            this->vetor[i]=nullptr;
        }
    }

    ContaBancaria* Banco::CriaConta(int id,string nome){
        //vamos procurar pra ver se tem id repetido
        
        for(int i=0;i<=19;i++){
            if(vetor[i]!= nullptr && vetor[i]->id==id){
                return nullptr;
            }
            else if(vetor[i]==nullptr){
                vetor[i]=new ContaBancaria(id,nome);
                break;
            }
        }
    
        this->contas+=1;

        return vetor[i];
    }

    ContaBancaria* Banco::Pesquisa(int id){

        for(int i=0;i<=contas-1;i++){
            if(vetor[i]->id==id){
                return vetor[i];
            }
        }

        return nullptr;    
    }

    void Banco::ListaContas(){
        for(i=0;i<=19;i++){
            if(vetor[i]!=nullptr){
                vetor[i]->imprime();
            }
        }
    }
