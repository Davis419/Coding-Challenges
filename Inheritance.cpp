#include <iostream>
#include <string>
using namespace std;

class Person
{
  protected:
  string First;
  string Last;
  public:
  Person();
  void setFirst(string);
  void setLast(string);

  void displayAlles();
 
};


Person::Person()
{
    //This is the default constructor of Person
}
class Birthday: public Person
{
  protected:
  int day;
  int month;
  int year;
  static char sl;
  string first;
  string last;
  
  public:
  Birthday(int,int,int);
  Birthday();
  int DOB();
  void display();

};

char Birthday::sl = '/';
int main()
{
string fName, lName;
fName = "Sbusiso";
lName = "Mthimunye";
Birthday p1;
p1.setFirst(fName);
p1.setLast(lName);
p1.displayAlles();

Birthday obj(12,10,2000);
obj.display();

  return 0;
}
//class Person implementation 

void Person::setFirst(string f)
{
    First = f;
}
void Person::setLast(string l)
{
    Last = l;
}


Birthday::Birthday()
{
    //This is the default constructor
}
void Person::displayAlles()
{
    cout<<"First Name: "<<First<<endl;
    cout<<"Last Name: "<<Last<<endl;
}

//Birthday class implementation
Birthday::Birthday(int d,int m, int y)
 : day(d),month(m),year(y) 
{
    //Nothing goes here I suppose
}

void Birthday:: display()
{
 cout<<"Date of Birth: ";
 cout<<day<<sl<<month<<sl<<year<<endl;

}