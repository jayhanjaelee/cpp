#include <iostream>
#include <string>

#include "Cat.h"

using namespace std;

Cat::Cat(string name, int age)
: Animal(name, age) 
{
  cout << "Cat's constructor was called." << endl;
}
