#ifndef _LENGTH_H
#define  _LENGTH_H
#include<iostream>
//using namespace std;
class Length
{
public:
	Length();
	Length(int feet, int inches);
	Length(int inches);
	int getFeet() const;
	int getInches() const;
	void setLength(int feet, int inches);
	//overloaded operators, not member.

	friend Length operator+(Length a, Length b);
	friend Length operator-(Length a, Length b);
	friend bool operator<(Length a, Length b);
	friend bool operator==(Length a, Length b);
	friend std::ostream& operator<<(std::ostream& out, Length a);
	friend std::istream& operator>>(std::istream& in, Length &a);

	//Members of class overloaded operators
	Length operator++();
	Length operator++(int);

	
	~Length();
private:
	int len_inches;
};
#endif
