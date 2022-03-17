#include<iostream>
using namespace std;

void Demo() throw(int,double)
{
   int a=2;
   if(a==1)
   throw a;
   else if(a==2)
   throw 'A';
   else if(a==3)
   throw 4.5;

}
