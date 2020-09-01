/*
	se
	P/p - print numbers
	A/a - add a number
	m - display mean of the numbers(media)
	s - o menor numero
	l - maior numero
	q - quit

	p: mostra os valores se tiver = [ 1 2 3 ]
	se nao [] - the list is empty

	a: adiciona o numero e mostra = n added

	m: mostra la a media se nao Unable to calculate the mean - no data

	s : The smallest number is n se nao Unable to determine the smallest number - list is empty

	l: The largest number is n se nao Unable to determine the largest number - list is empty

	q: Goodbye

	bonus: search for a number in the list and if found display the number of times it occurs in the list
	clearing out the list
	*don't allow duplicate entries

*/

#include <iostream>
#include <vector>
#include <string>
#include "DesafioProgramFlow.h"

using namespace std;

void my_Desafio::loop()
{
	while (end)
	{
		cout << "P - print numbers" << endl
			<< "A - add a number" << endl
			<< "M - display mean of the numbers" << endl
			<< "S - display the smallest number" << endl
			<< "L - display he largest number" << endl
			<< "C - contains the number in the list" << endl
			<< "X - clart the list" << endl
			<< "Q - quit\n" << endl
			<< "Enter your choice: ";
		cin >> input;
		switch (input)
		{
		case 'q':
		case 'Q':
			end = false;
			cout << "Goodbay" << endl;
			break;

		case 'p':
		case 'P':
			showList();
			break;

		case 'a':
		case 'A':
			cin >> a;
			ListNumbers.push_back(a);
			cout << a << " added\n" << endl;
			a = 0;
			break;

		case 'm':
		case 'M':
			mean();
			break;

		case 's':
		case 'S':
			if (ListNumbers.size() < 1)
				cout << "Unable to determine the smallest number - list is empty" << endl;
			else {
				int samallNumber{ ListNumbers.at(0) };
				for (auto numbers : ListNumbers)
				{
					if (numbers < samallNumber)
						samallNumber = numbers;
				}
				cout << "The smallest number is " << samallNumber << endl << endl;
			}
			break;

		case 'l':
		case 'L':
			if (ListNumbers.size() < 1)
				cout << "Unable to determine the largest number - list is empty" << endl;
			else {
				int largestNumber{};
				for (auto numbers : ListNumbers)
				{
					if (numbers > largestNumber)
						largestNumber = numbers;
				}
				cout << "The largest number is " << largestNumber << endl << endl;
			}
			break;

		case 'c':
		case 'C':
			cout << contains() << endl;
			break;

		case 'x':
		case 'X':
			ListNumbers.clear();
			cout << "The list now has empty" << endl;
			break;

		default:
			cout << "worng input\n" << endl;
			break;
		}


	}

}

void my_Desafio::showList()
{
	if (ListNumbers.size() < 1)
		cout << "[] - the list is empty" << endl;
	else {
		cout << "[ ";
		for (auto show : ListNumbers)
			cout << show << " ";
		cout << "]\n" << endl;
	}
}

void my_Desafio::mean()
{
	int meanTotaly{};
	if (ListNumbers.size() < 1)
		cout << "Unable to calculate the mean - no data\n" << endl;
	else {
		for (auto numbers : ListNumbers)
			meanTotaly += numbers;
		cout << "The mean is :" << float(meanTotaly) / ListNumbers.size() << endl << endl;

	}
}

string my_Desafio::contains()
{
	cout << "Number: ";
	int inputNumber{}, howMany{};
	cin >> inputNumber;
	for (auto numbersList : ListNumbers)
		if (inputNumber == numbersList)
			howMany++;
	if (howMany > 0)
		return "Has the number and it appears: " + to_string(howMany);
	else
		return "Don't have this number in the list";
}
