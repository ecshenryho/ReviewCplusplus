#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string mystr;
	float price = 0;
	int quantity = 0;

	cout << "Enter price: ";
	getline(cin, mystr);
	//extraction string from stream
	stringstream(mystr) >> price;
	cout << "Enter quantity: ";
	getline(cin, mystr);
	//extraction string from stream
	stringstream(mystr) >> quantity;
	cout << "Total price: " << price * quantity << endl;
	return 0;
}