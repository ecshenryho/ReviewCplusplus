#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
	string str;
	double price = 0;
	int quantity = 0;

	cout << "Enter the price: ";
	getline(cin, str);
	stringstream(str) >> price;
	cout << "Enter the quantity: ";
	getline(cin, str);
	stringstream(str) >> quantity;
	cout << "The total pice is: " << price * quantity << endl;
	system("pause");
	return 0;
}