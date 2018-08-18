#include<iostream>
using namespace std;
int search_array(const int arr[], int size, int target);
int main() {
	int  target,size=0;
	int *arr = new int[size];

	char anwser= 'y';
	int result, index=0;
	cout << "Enter the size for the array: ";
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << size << " value for array: ";
		cin >> arr[i];
	}

	do
	{
		cout << "Enter a number to search for: ";
		cin >> target;

		result = search_array(arr, size, target);

		if (result==-1){cout << "Value is not found in the array.\n";}
		else{cout << "Targert is sotred at position " << result << " in the array.\n";}
		
		cout << "Search again? (y/n).\n";
		cin >> anwser;

	} while (toupper(anwser)=='Y');

	
	system("pause");
	return 0;
}

int search_array(const int arr[], int size, int target) {
	bool found = false;
	int position = 0;
	for (int i = 0; i < size; i++)
	{
		if (target == arr[i])
		{
			found = true;
			position = i;
		}
	}

	if (found)
	{
		return position;
	}
	else
	{
		return -1;
	}
}