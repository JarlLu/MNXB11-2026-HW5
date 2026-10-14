/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

using namespace homework;

int main() { 
  std::cout << "as 1.1: \n";
  int a = 1;
  int b = 2;
  int c = 3;
  swap_ptr(&a, &b, &c);
  std::cout << a << "\n"; 
  std::cout << "as 1.2: \n";
  UniqueData d{67};
  std::cout << d.get() << "\n";
  d.set(10);
  std::cout << d.get() << "\n";
}

