#include<iostream>
using namespace std;

//A Template function
template <class T>
T sum(T a, T b) {
	return (a + b);
}


int main() {
	cout << "Result with integer values pass: " << sum<int>(4, 6) << endl;
	cout << "Result with double values pass: " << sum<double>(4.5, 5.5) << endl;
	system("pause");
	return 0;
}