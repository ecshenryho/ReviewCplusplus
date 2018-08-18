#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std;
void format_stream(ifstream& in_file, ofstream& out_file, int after_decimal, int fieldWidth);

int main() {
	ifstream inFile;
	ofstream outFile;
	inFile.open("data.txt");
	if (inFile.fail())
	{
		cout << "Could not open file.\n";
		exit(1);
	}
	outFile.open("dataAfter.txt");
	if (outFile.fail())
	{
		cout << "Could not open file.\n";
		exit(1);
	}

	format_stream(inFile, outFile, 4, 13);
	return 0;
}


void format_stream(ifstream& in_file, ofstream& out_file, int after_decimal, int fieldWidth){
	out_file.setf(ios::fixed);
	out_file.setf(ios::showpoint);
	out_file.setf(ios::showpos);
	out_file.precision(after_decimal);
	double value;
	while (in_file>>value)
	{
		out_file << setw(fieldWidth) << value << endl;
	}
}
