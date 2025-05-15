#include <iostream>
#include "cliente.h"
using namespace std;

//Construtor e métodos setters e getters
Cliente::Cliente(string n, string c){
    nome = n;
    cpf = c;
};

void Cliente::setnome(string n){
    nome = n;
}
string Cliente::getnome(){
    return nome;
}
void Cliente::setcpf(string c){
    cpf = c;
}
string Cliente::getcpf(){
    return cpf;
}


    