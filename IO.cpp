// BIG CPP FILE FOR I/O REVIEW
/*
	ofstream: CREATE a file and WRITE data to it
	ifstream: OPEN existing file and READ data from it
	fstream: Open the file for READ, WRITING or BOTH
*/
#include<iostream>
#include<fstream>
using namespace std;

// function prototype
void fun1();

//main function
int main() {
	fun1();
	system("pause");
	return 0;
}


//Create a file a write data to it.
void fun1() {
	//open file
	ofstream outFile("demofile.txt");
	//write to file
	outFile << "Henry\n";
	outFile << "Anna\n";
	outFile << "Katie\n";
	//close the file
	outFile.close();
}