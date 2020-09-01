#include "StringManipulcao.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void StringManipulcaoClass::my_StringManipulcao::stringParaInteiro(string palavra)
{
	string a_minha_string{ palavra };
	stringstream ss(a_minha_string); //Temos agora uma string stream para processar a string "123"
	int o_meu_inteiro {};
	ss >> o_meu_inteiro; //Extrai o inteiro da string stream para a variável "o_meu_inteiro"
	cout << "O inteiro extraido da string e: " << o_meu_inteiro << endl;

	cout << a_minha_string << endl;


}
