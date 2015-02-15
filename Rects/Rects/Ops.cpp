#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Conta{

private:
	float saldo;
public:
	Conta();
	Conta(float _saldo);
	float RetornaSaldo();
	/*void AlteraSaldo(float novoSaldo);*/
	
	Conta operator +(const Conta& conta)
	{
		Conta novaConta;
		novaConta.saldo = Conta::saldo + conta.saldo;
		return novaConta;
	}
};

Conta::Conta()
{
	Conta::saldo = 0.0;
}

Conta::Conta(float _saldo)
{
	Conta::saldo = _saldo;
}

float Conta::RetornaSaldo()
{
	return Conta::saldo;
}

int main()
{
	Conta a (10.0);
	Conta b (20.0);
	Conta c = a + b;
	cout << c.RetornaSaldo << endl;
}