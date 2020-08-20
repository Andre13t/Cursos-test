#include "ConditionalOperator.h"
#include <iostream>
using namespace std;

void ConditionalOperatorClass::my_ConditionalOperator::ConditionalOperatorEx()
{
	int a{ 10 }, b{ 20 };
	int score{ 92 };
	int result{};

	result = (a > b) ? a : b;
	cout << result << endl;
	result = (a < b) ? (b - a) : (a - b);
	cout << result << endl;
	result = (b != 0) ? (a / b) : 0;
	cout << result << endl;
	cout << ((score > 90) ? "Excellent" : "Godd");
}
