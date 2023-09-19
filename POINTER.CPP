#include<iostream.h>
#include<conio.h>
class Base
{
public:
  int x;

  Base() 
  {
    x = 10;
  }
};

class Derived : public Base
{
public:
  int y;

  Derived()
  {
    y = 20;
  }
};

void main()
{

  Base* pBase = new Derived();

  clrscr();


  cout << pBase->x << endl;
  getch();
}
