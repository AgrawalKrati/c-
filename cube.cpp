/*cube using inline function
*/

#include<iostream>
using namespace std;

inline int cube(int s){
    
      cout << "inside the function" << endl;
      return s*s*s;
   
}

int main(){
       
       cout << "cube of the value 5 is :" << cube(5) << endl;
       
       return 0;
}

/*
   int i=10;
   i++;
   cout << i;
   */
