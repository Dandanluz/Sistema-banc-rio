#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include<iostream>
#include <string>
#include "cliente.h"
using namespace std;

//Construção da classe conta bancária
class ContaBancaria {
private:
    int numero;
    double saldo;
    Cliente titular;

public:
//Construtores e métodos setters e getters
    ContaBancaria(int n, Cliente t, double s = 0);
    void setnumero(int n);
    int getnumero();
    void settitular(Cliente t);
    Cliente gettitular();
    void setsaldo(double s);
    double getsaldo();
    void exibirSaldo();
    void exibirInformacoes();

    // Método depositar
    void depositar(double valor) {
        saldo += valor;

    }

    // Método sacar
    void sacar(double valor) {
        if (valor <= saldo) {
            saldo -= valor;
            cout << "Sacado: R$ " << valor << " da conta " << numero << endl;
        } else {
            cout << "Saldo insuficiente na conta " << numero << endl;
        }
    }

    // Sobrecarga do método transferir    
    void transferir(double valor, ContaBancaria &destino) {
        if (valor <= saldo) {
            saldo -= valor;
            destino.depositar(valor);
            cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.numero << endl;
        } else {
            cout << "Saldo insuficiente para transferência da conta " << numero << endl;
        }
    }

    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
        double metade = valor / 2;
        if (valor <= saldo) {
            saldo -= valor;
            destino1.depositar(metade);
            destino2.depositar(metade);
            cout << "Transferido: R$ " << metade << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") da conta " << numero << endl;
        } else {
            cout << "Saldo insuficiente para transferência da conta " << numero << endl;
        }
    }
};

#endif