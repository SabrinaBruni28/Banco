#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Cliente.h"
#include "endereco.h"

typedef struct{
    int numero;
    double saldo;
    char tipo[9];
    int ano;
    double emprestimo;
}ContaBancaria;

void Menu(ContaBancaria* conta1,Cliente* client1,EnderecoCliente* ende1);
void Inicializa(ContaBancaria* conta, Cliente* client,EnderecoCliente* endereco);
void Imprime(ContaBancaria* conta,Cliente* client,EnderecoCliente* endereco);
void Deposito(ContaBancaria* conta);
void Saque(ContaBancaria* conta);
void Emprestimo(ContaBancaria* conta);
int Avalia(ContaBancaria* conta);

#endif // CONTA_H_INCLUDED
