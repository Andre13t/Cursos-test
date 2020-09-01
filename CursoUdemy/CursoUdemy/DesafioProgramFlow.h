#pragma once
#include <vector>
class my_Desafio
{
public:
	std::vector<int> ListNumbers{};
	char input{};
	bool end{ true };
	int a{};

	void loop();
	void showList();
	void mean();
	std::string contains();

};