#include<iostream>
#include "Overload.h"
using namespace std;
Overload makeArray();
int main() {
	Overload obj1;//Default constructor called.
	obj1 = makeArray();//Parameter constructor called.
					   //Then Move copy constructor called.
					   //Destructor called.
					   //Move assignment called.
					   //Destructor called.
	Overload obj2 = makeArray();//Parameter constructor called.
								//Then Move copy constructor called.
								//Destructor called.
	Overload obj3;//Default constructor called.
	obj3 = obj1;//Assignment operator called.
	
	cout << "\nThe object's data is: ";
	obj1.print();
	obj3.print();
	cout << endl;

	return 0;
}
Overload makeArray() {
	Overload array(4, 20);
	return array;
}