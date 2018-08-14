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
//main function
int main() {
	fun1();
	fun2();
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