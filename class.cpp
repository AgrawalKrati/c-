/*
*write a cpp program using class and method
*Date : 20-feb-2022
Krati Agrawal
*/

#include <iostream>
using namespace std;
class A {
    public :
    int x;
    int y;
    void set(int p,int q){
        x=p;
        y=q;
         }
    void show()
   {
       cout<<"x="<<x<<endl;
       cout<<"y="<<y<<endl;
   }
    
    };
int main() {
    A obj;
    obj.set(5,4);
    obj.show();
    obj.set(7,8);
    obj.show();
    return 0;
}

