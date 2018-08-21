#include <iostream>
using namespace std;

class Car {
   public:
      Car() { 
         cout << "Constructor called!" <<endl; 
      }
      ~Car() { 
         cout << "Destructor called!" <<endl; 
      }
};
int main() {
   Car* myCarArray = new Car[3];//constructor will be called 3 times.
   delete [] myCarArray; // Delete array, destructor will be called 3 times.

   return 0;
}