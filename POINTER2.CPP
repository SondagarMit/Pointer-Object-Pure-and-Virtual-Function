#include<iostream.h>
#include<conio.h>
class Base 
{
public:
  int x;
  void print() {
    cout << "x = " << x << endl;
  }
};

class Derived : public Base
{
public:
  int y;
  void print()
  {
    Base::print();
    cout << "y = " << y << endl;
  }
};

void main()
{
  Base *p = new Derived();

  clrscr();
  p->x = 10;

  cout << "y = 20" << endl;

  p->print();

  getch();
}
