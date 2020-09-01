#include <iostream>
#include "SeparadorMoedas.h"

void SeparadorMoedasClass::my_SeparadorMoedas::Separador(int valor)
{
	/*
	pegar o valor de centavos em inteiro
	divir em 1 real/50 centavos/25 centavos/10 centavos/ 5 centavos/1 centavos
	pego valor divido inteiro por 100 pego o resto 
	divido inteiro por 50 pego o resto
	divido inteiro por 25 pego o resto
	divido inteiro por 10 pego o resto
	divido inteiro por 5 pego o resto
	divido inteiro por 1 
	*/
	
	valorInicial = valor;

	umReal = valor / moedaUmReal;
	valor %= moedaUmReal;
	cinquenta = valor / moedaCinquenta;
	valor %= moedaCinquenta;
	vinteCinco = valor / moedaVinteCinco;
	valor %= moedaVinteCinco;
	dez = valor / moedaDez;
	valor %= moedaDez;
	cinco = valor / moedaCinco;
	valor %= moedaCinco;
	um = valor / moedaUm;
	
	std::cout<<"Valor de :\"" << valorInicial << "\" centavos em quantidades de moedas:\n"<<umReal<<" Um real,\n" <<
				cinquenta << " Cinquenta centavos,\n" << vinteCinco << " Vinte e cinco centavos,\n" 
				<< dez << " Dez centavos,\n" << cinco << " Cinco centavos,\n" << um << " Um centavo.";
}
