#pragma once

class Vector
{
public:
  void SetX(int x);
  void SetY(int y);
  int GetX() const;
  int GetY() const;
  void AddConst(const Vector& other) const;

private:
  int mX;
  int mY;
};
