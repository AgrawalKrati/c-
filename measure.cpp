/* To measure area and volume
*/

#include<iostream>
using namespace std;

class Measure{
  public:
  int input1;
  int input2;
  int input3;
  
  void Input(int length,int width,int height)
  {
       input1=length;
       input2=width;
       input3=height;
  }
  
  int area()
  {
    return input1*input2;  // area 
  }
  
  int volume()
  {
  return input1*input2*input3;  // volume
  }
};

int main()
{
Measure obj1;
obj1.Input(2,3,4);
cout<< "The inputs:" <<obj1.input1<<""<<obj1.input2<<""<<obj1.input3<<endl;     // to give the input
cout<<"The area of inputs is:"<<obj1.area()<<endl;     //area of the input 
cout<<"The volume of inputs is:"<<obj1.volume()<<endl;   // volume

return 0;
}
