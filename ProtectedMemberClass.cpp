#include <iostream>
using namespace std;

class Rectangle
{
protected:
	double width;

};
//Derived class can access protected members of parent class.
class ChildRectangle:Rectangle{
public:
	void setWidth(double wid);
	double getWidth(void);
};

double ChildRectangle::getWidth(void) {
	return width;
}

void ChildRectangle::setWidth(double wid) {
	width = wid;
}


int main(){
	ChildRectangle recChild;
	recChild.setWidth(20.0);
	cout << "Width of rectangle: " << recChild.getWidth() << endl;
return 0;
}
