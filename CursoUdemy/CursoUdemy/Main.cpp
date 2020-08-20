#include <iostream>
#include "Vector.h"
#include "Teste.h"
#include "SeparadorMoedas.h"
#include "SwitchCase.h"
#include "StringManipulcao.h"
#include "ConditionalOperator.h"

int main() {

	////exemplo do uso de vector em c++
	//VectorClass::My_vectorClass myVectorClass;
	//myVectorClass.VectorExemplo();

	//// Teste
	//TesteClass::my_teste myTeste;
	//myTeste.MostraTest();

	////desafio pegar um valor em cetavos e repassar qauntidades de moedas
	//SeparadorMoedasClass::my_SeparadorMoedas mySeparador;
	//mySeparador.Separador(329);

	//// exemplo de switch case
	//SwitchCase::my_SwitchCase mySwitchCase;
	//mySwitchCase.SwitchCaseEx();

	// exemplo separando string e tranformando pra numero
	StringManipulcaoClass::my_StringManipulcao sM;
	sM.stringParaInteiro("123");

	// exemplo Conditional Operator
	ConditionalOperatorClass::my_ConditionalOperator cO;
	cO.ConditionalOperatorEx();

	return 0;
}