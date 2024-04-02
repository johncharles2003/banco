#include <iostream>
#include <string>
#include "ContaBancaria.hpp"
#include "Banco.hpp"

using namespace std;


int main(){

    char letra;
    int id;
    string cliente;
    float valor;
    int dest;
    Banco* bank=new Banco();
    int i;
    

    while(1){
        cin >> letra;

        if(letra=='C'){
            cin >> id  >> cliente;
            if(bank->CriaConta(id,cliente)==nullptr){
                cout << "ERRO: conta repetida" << endl;
            }
            else{
                cout << "conta criada" << endl;
            }
            
        }

        else if(letra=='D'){
             cin >> id  >> valor;

             ContaBancaria* conta_bancaria = bank->Pesquisa(id);

             if(conta_bancaria == nullptr){
                 cout << "ERRO: conta inexistente" << endl; 
             }
             else{
                 conta_bancaria->deposito(valor);
                 cout << "deposito efetuado" << endl;
             }
        }

        else if(letra=='S'){
            cin >> id  >> valor;

            ContaBancaria* conta_bancaria = bank->Pesquisa(id);

            if(conta_bancaria == nullptr){
                 cout << "ERRO: conta inexistente" << endl; 
             }
             else{
                 conta_bancaria->saque(valor);
                 cout << "saque efetuado" << endl;
             }
        }

        else if(letra=='P'){
            cin >> id  >> dest >> valor;

            ContaBancaria* conta_bancaria = bank->Pesquisa(id);
            ContaBancaria* conta_bancaria2 = bank->Pesquisa(dest);

            if(conta_bancaria == nullptr || conta_bancaria2 == nullptr){
                cout << "ERRO: conta inexistente" << endl; 
            }
            else{
                conta_bancaria->pix(conta_bancaria2,valor);
                cout << "pix efetuado" << endl;
            }
        }

        else if(letra=='I'){
        
            bank->ListaContas();       
        }

        else if(letra=='T'){
            break;
        }
    }   

    return 0;
}