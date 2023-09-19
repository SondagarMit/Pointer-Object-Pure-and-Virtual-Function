#include<iostream.h>
#include<conio.h>
class Base 
{
public:
  virtual void fun() 
  {
    cout << "Base fun" << endl;
  }
};

class Derived : public Base 
{
public:
  void fun()
  {
    cout << "Mitu is Going" << endl;
  }
};

void main()
{
  Derived d;
  Base *b = &d;

  clrscr();

  b->fun();

getch();
}
