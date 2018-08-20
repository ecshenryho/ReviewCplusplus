#include "Overload.h"
#include<iostream>
using namespace std;

Overload::Overload(){
	cout << "Default constructor called.\n";
	_size = 0;
	_ptr = new int[_size];
	setValue(0);
}
Overload::Overload(int size, int value) {
	cout << "Parameters constructor called.\n";
	_size = size;
	_ptr = new int[_size];
	setValue(value);
}

Overload& Overload::operator=(const Overload& obj) {
	cout << "Assignment operator called.\n";
	//check to avoid self-assignment object
	if (this!=&obj)
	{
		if (_size>0)
		{
			delete[]_ptr;
		}
		_size = obj._size;
		_ptr = new int[_size];
		for (int i = 0; i < _size; i++)
		{
			_ptr[i] = obj._ptr[i];
		}
	}
	return *this;
}
Overload::Overload(const Overload& obj) {
	cout << "Copy constructor called.\n";
	_size = obj._size;
	_ptr = new int[_size];
	for (int i = 0; i < _size; i++)
	{
		_ptr[i] = obj._ptr[i];
	}
}

//Move assignment and move constructor
Overload& Overload::operator=(Overload &&obj) {

	cout << "Move assignment called.\n";
	if (this!=&obj)
	{	//called function form algorithm
		swap(_size, obj._size);
		swap(_ptr, obj._ptr);
	}
	return *this;
}
Overload::Overload(Overload &&temp) {
	cout << "Move copy constructor called.\n";
	//get copyies from temp
	this->_size = temp._size;
	this->_ptr =temp._ptr;
	//put the temp object in a safe state for its destructor to run
	temp._size = 0;
	temp._ptr = nullptr;
}

void Overload::print() const {
	for (int i = 0; i < _size; i++)
	{
		cout << _ptr[i] << " ";
	}
}
void Overload::setValue(int val) {
	for (int i = 0; i < _size; i++)
	{
		_ptr[i] = val;
	}
}

Overload::~Overload()
{
	cout << "Destructor called.\n";
	if (_size>0)
	{
		delete[]_ptr;
	}
}
