/*#include<iostream>
using namespace std;

class Calculator{
  public:
    int input1;
    int input2;
      void setInput(int a,int b){
      input1=a;
      input2=b;
      }
      void Calculator add(Calculator obj1,Calculator obj2){
         Calculator obj3;
         obj3.input1=obj1.input1+obj2.input1;
         obj3.input2=obj1.input2+obj2.input2;
         return obj3;}
         
       Calculator sub(Calculator obj1,Calculator obj2){
         Calculator obj4;
         obj4.input1=obj1.input1-obj2.input1;
         obj4.input2=obj1.input2-obj2.input2;
         return obj4;
     }      
  
  
  };
  
  int main(){
  Calculator obj1,obj2,obj3,obj4;
  obj1.setInput(4,5);
  obj2.setInput(1,2);
  obj3 =obj1.add(obj1,obj2);
  obj4 =obj1.sub(obj1,obj2);
 
  cout<< "sum of inputs : "<< obj3.input1 << " " << obj3.input2;
   cout<< "subtraction of inputs : "<< obj4.input1 << " " << obj4.input2;
  
  
  return 0;
  
  }*/
  
  #include<iostream>
using namespace std;

class Calculator{
  public:
    int input1;
    int input2;
      void setInput(int a,int b){
      input1=a;
      input2=b;
      }
      int add(){
      return input1+input2;}
      int subs(){
      	return input1-input2;}};
      	
      	int main(){
      	Calculator obj;Calculator obj2; Calculator obj3;
      	obj.setInput(9,10);
      	obj2.setInput(5,17);
      	//Calculator obj3;
      	obj3.setInput(obj.input1,obj2.input1);
      	cout<<obj3.add();
      	
      	cout<<obj.add();
      	cout<<obj.subs();return 0;}
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
