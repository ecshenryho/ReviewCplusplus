#include <iostream>
using namespace std;

int overload (int a, int b) {
	return (a * b);
}

double overload(double a, double b) {
	return (a / b);
}
int main()
{
	int a = 2, b = 5;
	double c = 10.2, d = 5.1;
	//the right overload() will be call depends on the data type was passed to it
	cout << "Call overload function with int type: " << overload(a, b) << endl;
	cout << "Call overload function with double type: " << overload(c, d) << endl;
	return 0;
}