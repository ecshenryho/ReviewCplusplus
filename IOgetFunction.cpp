#include<iostream>
#include<string>
#include<fstream>

int main() {
	std::string fileName;
	std::fstream file;
	char ch;

	std::cout << "Enter a file name: ";
	std::cin >> fileName;
	//open the file in ios::in mode
	file.open(fileName.c_str(), std::ios::in);
	if (!file)
	{
		std::cout << "Could not open the file.";
		return 1;
	}
	//get a single ch from the file
	ch = file.get();
	while (ch!=EOF)
	{
		std::cout << ch;
		ch = file.get();
	}
	//close the file
	file.close();
	return 0;
}