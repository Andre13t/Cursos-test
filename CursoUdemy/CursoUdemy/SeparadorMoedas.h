#pragma once
#include <string>
namespace SeparadorMoedasClass
{
	class my_SeparadorMoedas
	{
		public:
			void Separador(int valor);
			const int moedaUmReal{ 100 }, moedaCinquenta{ 50 }, moedaVinteCinco{ 25 }, moedaDez{ 10 }, moedaCinco{ 5 }, moedaUm{ 1 };
			int umReal{}, cinquenta{}, vinteCinco{}, dez{}, cinco{}, um{}, valorInicial{};
	};
}
