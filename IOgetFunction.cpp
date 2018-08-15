#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
using namespace std;

int main() {
	string fileName;
	fstream inFile, outFile;
	char ch;
	cout << "Enter the file name: ";
	cin >> fileName;
	//open file for input
	inFile.open(fileName.c_str(), ios::in);
	if (!inFile)
	{
		cout << "could not open input file.\n";
		return 1;
	}
	//open file for output
	outFile.open("modified.txt", ios::out);
	if (!outFile)
	{
		cout << "Could not open the output file.\n";
		return 2;
	}

	ch = inFile.peek();
	while (ch != EOF)
	{
		cout << "Inside while loop\n";
		//if it is a digit, increment by 1
		if (isdigit(ch))
		{
			int number;
			inFile >> number;
			outFile << number + 1;
		}
		//else just read and write to the file
		else
		{
			ch = inFile.get();
			outFile << ch;
		}

		ch = inFile.peek();
	}

	inFile.close();
	outFile.close();
	return 0;
}