#include <iostream>
using namespace std;
class Test
{
public:
	Test(int len);
	int getLength(void);
	Test(const Test& obj);
	~Test();

private:
	int *ptr;

};

Test::Test(int len)
{
	cout << "Parameter constructor was called.\n";
	ptr = new int;
	*ptr = len;
}
Test::Test(const Test& obj) {
	cout << "Copy constructor was called.\n";
	ptr = new int;
	*ptr = *obj.ptr;
}
int Test::getLength(void) {
	return *ptr;
}
Test::~Test()
{
	cout << "Deallocate memory.\n";
	delete ptr;
}

void display(Test obj) {
	cout << "Length of line : " << obj.getLength() << endl;
}
int main(){
	Test test(10);//call copy constructor
	display(test);

	Test test1 = test; //call copy constructor
	display(test1);
	system("pause");
return 0;
}
