#include<iostream.h>
#include<conio.h>
class Animal 
{
public:
  virtual void speak() = 0;
};

class Dog : public Animal 
{
public:
  void speak()
  {
    cout << "Woof!" << endl;
  }
};

class Cat : public Animal 
{
public:
  void speak()
  {
    cout << "Meow!" << endl;
  }
};

void  main() 
{

  Animal* animal = 0;

  clrscr();
  animal = new Dog();
  animal->speak();


  animal = new Cat();
  animal->speak();
 getch();
}
