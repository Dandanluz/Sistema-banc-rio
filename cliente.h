#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

// Criando a classe Cliente
class Cliente {
private:
    string nome;
    string cpf;

public:
//Construtores e métodos setters e getterss
    Cliente() = default;
    Cliente(string n, string c);
    void setnome(string n);
    string getnome();
    void setcpf(string c);
    string getcpf();

};


#endif
