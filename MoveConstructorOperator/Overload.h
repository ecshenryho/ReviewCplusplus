#ifndef OVERLOAD_
#define OVERLOAD_
#include<iostream>
#include<algorithm>
using namespace std;

class Overload
{
public:
	Overload();
	Overload(int size, int value);

	Overload& operator=(const Overload& obj);
	Overload(const Overload& obj);

	//Move assignment and move constructor
	Overload& operator=(Overload &&obj);
	Overload(Overload &&temp);

	~Overload();

	void print() const;
	void setValue(int val);
private:
	int *_ptr;
	int _size;
};

#endif
