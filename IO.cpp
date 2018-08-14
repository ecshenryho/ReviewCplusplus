/*
	ofstream: CREATE a file and WRITE data to it
	ifstream: OPEN existing file and READ data from it
	fstream: Open the file for READ, WRITING or BOTH
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

// function prototype
void fun1();
void fun2();
void fun3();
void fun4();
//main function
int main() {
	fun1();
	fun2();
	fun3();
	fun4();
	system("pause");
	return 0;
}


//Create a file and write data to it.
void fun1() {
	//open file
	ofstream outFile("fun1.txt");
	//write to file
	outFile << "Henry\n";
	outFile << "Anna\n";
	outFile << "Katie\n";
	//close the file
	outFile.close();
}

//Write user input to a file
void fun2() {
	ofstream outFile("fun2.txt");
	string name;
	cout << "Enter the name of three friends\n";
	for (int i = 1; i <=3 ; i++)
	{
		cout << "Friend #" << i << ": ";
		cin >> name;
		outFile << name << endl;
		cin.ignore();
	}

	outFile.close();
}

// reading from file
void fun3() {
	ifstream inFile("fun2.txt");
	string str;
	while (getline(inFile, str))
	{
		cout << str << " ";
	}
	
	cout << endl;
}

//read a write a file through an fstream objec
void fun4() {
	string word;
	fstream inOutFile("fun4.txt");
	if (inOutFile.fail())
	{
		cout << "The file was not found." << endl;
	}
	//read from file
	else
	{
		while (inOutFile>>word)
		{
			cout << word << " " ;
		}
	}
	cout << endl;
	//clear end of file flag to allow additional file operation
	inOutFile.clear();

	//write to file
	inOutFile << "This line is added to the file." << endl;
	inOutFile.close();
}