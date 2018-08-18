#include<iostream>
#include<ctime>
using namespace std;

int *randomNum() {
	static int a[10];
	//set the seed
	srand((unsigned)time(NULL));
	for (int  i = 0; i < 4; i++)
	{
		a[i] = rand();
		cout << a[i] << endl;
	}
	return a;
}
int main() {
	int * ptr;
	ptr = randomNum();
	for (int i = 0; i < 4; i++)
	{
		cout << "*(ptr + " << i << "): " << *(ptr + i)<<endl;
	}
	system("pause");
	return 0;
}
