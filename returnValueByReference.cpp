#include <iostream>
#include <ctime>

using namespace std;

int vals[] = { 5,10,3,5,40};

// return a reference to the ith element
int& setValues(int i) {
	return vals[i];  
}

int main() {

	cout << "Value before:" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}

	//modify element
	setValues(1) = 20;
	setValues(3) = 70; 

	cout << "Value after modification: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
	system("pause");
	return 0;
}