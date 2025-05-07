#include "Vector.h"

void Vector::SetX(int x) {
  mX = x;
}

void Vector::SetY(int y) {
  mY = y;
}

int Vector::GetX() const {
  return mX;
}

int Vector::GetY() const {
  return mY;
}

void Vector::AddConst(const Vector& other) const {
}
