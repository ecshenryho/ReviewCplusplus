#include <iostream>
using namespace std;
int main(){
double n = -65.5, m = 12.8, l = 0;
cout.setf(ios::left);
cout << "Left:" << endl;
cout.width(6);
cout << n << endl;
cout.width(6);
cout << m << endl << endl;
cout.setf(ios::right);
cout << "Right:" << endl;
cout.width(6);
cout << n << endl;
cout.width(6);
cout << m << endl << endl;
cout.setf(ios::showpos);
cout << "Show positive:" << endl;
cout << n << endl;
cout << m << endl;
cout << l << endl;
return 0;
}
