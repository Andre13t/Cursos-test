#include <iostream>
#include "Vector.h"

void VectorClass::My_vectorClass::VectorExemplo()
{
	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << "vctor 1: " << vector1.at(0) << ", " << vector1.at(1) << " size: " << vector1.size() << std::endl;

	vector2.push_back(100);
	vector2.push_back(200);
	std::cout << "vctor 2: " << vector2.at(0) << ", " << vector2.at(1) << " size: " << vector2.size() << std::endl;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	std::cout << "vector 2d: " << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << std::endl;

	std::cout << "vector 2d: " << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1);
}
