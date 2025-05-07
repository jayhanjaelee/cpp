#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

Animal::Animal(string name, int age) 
  :mName(name),
  mAge(age)
{
  cout << "Animal's constructor was called." << endl;
}
