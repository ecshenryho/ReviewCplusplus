#include<iostream>
using namespace std;
const int SIZE = 3;
int main() {
	int var[SIZE] = { 10,20,30 };
	int *ptr[SIZE];//declare array of pointer
	for (int i = 0; i < SIZE; i++)
	{
		ptr[i] = &var[i];
		cout << "Value of var [" << i<<"] = " << *ptr[i] << endl;
	}

	const char *car[SIZE] = { "Toyota","camry", "audi" };
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Value of var[" << i << "] = " << *(car+i) << endl;
	}
	system("pause");
	return 0;
}
