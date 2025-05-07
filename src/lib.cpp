#include <iostream>

#include "lib.h"

using namespace std;

void do_static_casting() {
  float number1 = 3.f;
  int number2 = static_cast<int>(number1);

  cout << "number2:" << number2 << endl;
}
