#include <iostream>
 
using namespace std;
 
int main () {
   int  var;
   int  *ptA;
   int  **ptB;
   var = 3000;

   ptA = &var;
   ptB = &ptA;

   cout << "Value of var :" << var << endl;
   cout << "Value available at *ptr :" << *ptA << endl;
   cout << "Value available at **pptr :" << **ptB << endl;

   return 0;
}