#include <iostream>
#include "Vector.h"
#include "Teste.h"
#include "SeparadorMoedas.h"
int main() {

	//exemplo do uso de vector em c++
	VectorClass::My_vectorClass myVectorClass;
	myVectorClass.VectorExemplo();

	// Teste
	TesteClass::my_teste myTeste;
	myTeste.MostraTest();

	//desafio pegar um valor em repassar em moedas
	SeparadorMoedasClass::my_SeparadorMoedas mySeparador;
	mySeparador.Separador(329);

	return 0;
}