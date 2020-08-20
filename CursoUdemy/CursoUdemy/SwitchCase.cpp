#include "SwitchCase.h"
#include <iostream>
void SwitchCase::my_SwitchCase::SwitchCaseEx()
{
	char palavra{ 2 };
	std::cout << "escreva A ou B" << std::endl;
	std::cin >> palavra;

	switch (palavra)
	{
	case 'a':
	case 'A':
		std::cout << "A selecionado";
		break;
	case 'b':
	case 'B':
		std::cout << "B selecionado";

	default: std::cout << "nem a,A nem b,B";
	}
}

void SwitchCase::my_SwitchCase::Pinto()
{

	std::cout << "hola";
}
