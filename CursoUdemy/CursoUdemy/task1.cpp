#include "task1.h"
#include<iostream>
#include<string>
using namespace std;
void my_task1::loop()
{
	getline(cin, entrada);
	for (size_t i = 0; i < entrada.size(); i++)
		inverted = entrada.at(i) + inverted;

	for (size_t i = 0; i < entrada.size(); i++)
	{
		string espaces(entrada.size() - i, ' ');
		cout << espaces << entrada.substr(0, i + 1) << inverted.substr(entrada.size() - i, entrada.size()) << endl;
	}
}
