#include<iostream>
#include "Length.h"
int main() {
	Length ob1(0), ob2(1, 9), ob3(0);
	std::cout << ob1 << std::endl;
	std::cout << ob2 << std::endl;
	std::cout << ob3 << std::endl;
	//using ++ overloaded operator
	std::cout << "Prefix ++ opertator: \n";
	for (int i = 0; i < 4; i++)
	{
		ob1 = ++ob2; 
		std::cout << "Ob1: " << ob1 << ". Ob2: " << ob2 << std::endl;
	}
	std::cout << "Postfix ++ operator:\n";
	for (int i = 0; i < 4; i++)
	{
		ob1 = ob2++;
		std::cout << "Ob1: " << ob1 << ". Ob2: " << ob2 << std::endl;
	}

	//using << , >> overloaded operators
	std::cout << "Input output Operators:\n";
	std::cin >> ob3;
	std::cout << "You enter: " << ob3 << std::endl;

	return 0;
 }