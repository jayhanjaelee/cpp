#include <iostream>

#include "lib.h"
#include "classes/Animal.h"
#include "classes/Cat.h"

using namespace std;

int main(int argc, char* argv[]) {

  Animal* animal = new Animal("Foo", 10);
  Cat* cat = new Cat("Bar", 20);

  cout << "Animal's address:" << animal << endl;
  cout << "Cat's address:" << cat << endl;

  cout << "Cat's age:" << cat->mAge << endl;
  cout << "Cat's name:" << cat->mName << endl;

  delete animal;
  delete cat;

  // do_static_casting();

  return 0;
}
