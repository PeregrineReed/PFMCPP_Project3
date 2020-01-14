/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) Instantiate a few of your user-defined types in the main function at the bottom of that file, and call some of those member functions.
 
 3) make them print out something interesting via std::cout
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 
 example:
 */

#include <iostream>

struct UDT  // my user defined type
{
    int a; //a member variable
    UDT() { a = 0; }             //3) the constructor
    void printThing()            //1) the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //5) printing out something interesting
    }
};

struct Thing
{
  int b, c, d;
  Thing()
  {
    b = 0;
    c = 0;
    d = 0;
  }
  void printThings()
  {
    std::cout << "Thing::printThings() " << b << c << d << std::endl;
  }
};

struct Stuff
{
  double e, f, g;
  Stuff()
  {
    e = 0.0;
    f = 0.0;
    g = 0.0;
  }

  void printStuff()
  {
    std::cout << "Thing::printThings() " << e << f << g << std::endl;
  }
};

struct Cool
{
  char k, e, w, l;
  Cool()
  {
    k = 'c';
    e = 'o';
    w = 'o';
    l = 'l';
  }
  void beCool()
  {
    std::cout << "Thing::printThings() " << k << e << w << l << std::endl;
  }
};

int main()
{
    UDT foo;              //4) instantiating a UDT in main()
    Thing ting;
    Stuff sturf;
    Cool cool;

    foo.printThing();     //4) calling a member function of the instance that was instantiated.
    ting.printThings();
    sturf.printStuff();
    cool.beCool();

    return 0;
}
