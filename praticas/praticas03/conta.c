#include <stdio.h>
#include "conta.h"

Conta conta_criar(int numero)
{
    Conta conta;
    return conta;
}

void conta_depositar(Conta *conta, double valor)
{
    conta -> saldo += valor;
}

void conta_sacar(Conta *conta, double valor)
{
    if (conta -> saldo >= valor)
    {
        conta -> saldo -= valor;
    }
}

double consultar_saldo(Conta *conta)
{
    return conta -> saldo;
}