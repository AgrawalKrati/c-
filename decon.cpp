/*
C++ program to demonstrate the use of default constructor
Krati Agrawal*/

#include <iostream>
using namespace std;

// declare a class
class  Wall {
 
   
  public:
    // default constructor to initialize variable
     double length;
    double height;
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
   
   
   
     Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }

};

int main() {
  Wall Wall1;
 
  Wall wall1(2.5, 3.4);
  //Wall wall2(4.5, 7.5);

  cout << "Area of Wall 1: " << Wall1.calculateArea() << endl;
  cout << "Area of Wall 2: " << Wall1.calculateArea();
  }
 

