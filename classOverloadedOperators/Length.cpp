#include "Length.h"

Length::Length()
{
}
Length::Length(int inches) {
	len_inches = inches;
}
Length::Length(int feet, int inches) {
	setLength(feet, inches);
}
void Length::setLength(int feet, int inches) {
	len_inches = 12 * feet + inches;
}
int Length::getFeet() const {
	return len_inches / 12;
}
int Length::getInches() const {
	return len_inches % 12;
}
Length Length::operator++() {
	len_inches++;
	return *this;
}
Length Length::operator++(int) {
	Length temp = *this;
	len_inches++;
	return temp;
}
Length operator+(Length a, Length b) {
	return Length(a.len_inches + b.len_inches);
}
Length operator-(Length a, Length b) {
	return Length(a.len_inches - b.len_inches);
}
bool operator==(Length a, Length b) {
	return a.len_inches == b.len_inches;
}
bool operator<(Length a, Length b) {
	return a.len_inches < b.len_inches;
}
std::ostream& operator<<(std::ostream& out, Length a) {
	out << a.getFeet() << " feet, " << a.getInches() << " inches";
	return out;
}
std::istream& operator>>(std::istream& in, Length& a) {
	int feet, inches;
	std::cout << "Enter feet: ";
	in >> feet;
	std::cout << "Enter inches: ";
	in >> inches;
	a.setLength(feet, inches);
	return in;
}
Length::~Length()
{
}



