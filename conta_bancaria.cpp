#include "conta_bancaria.h"
#include "cliente.h"
#include <string>
using namespace std;


// Construtor e métodos setters e getters
ContaBancaria::ContaBancaria(int n, Cliente t, double s){
    numero = n;
    titular = t;
    saldo = s;
};
void ContaBancaria::setnumero(int n){
    numero = n;
}
int ContaBancaria::getnumero(){
    return numero;
}
void ContaBancaria::settitular(Cliente t){
    titular = t;
}
Cliente ContaBancaria::gettitular(){
    return titular;
}
void ContaBancaria::setsaldo(double s){
    saldo = s;
}
double ContaBancaria::getsaldo(){
    return saldo;
} 

// Criação da função exibir saldo
void ContaBancaria::exibirSaldo() {
        cout << "Saldo atual da conta " << getnumero() << ": R$ " << getsaldo() << endl;
    }

// Criação da função exibir informações
void ContaBancaria::exibirInformacoes(){
    cout << "Titular: " << titular.getnome() << ", CPF: " << titular.getcpf() << endl;
    cout << "Número da conta: " << getnumero() << ", Saldo: R$ " << getsaldo() << endl;
}