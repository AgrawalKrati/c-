#include<iostream>
#include<list>
using namespace std;

int main()
{
   list<int> lst;
   int i;
   for(i=10; i>0; i++)
      lst.push_back(i);
    cout << "Size= " <<lst.size() << endl;
    cout << "Contents: ";
    list<int>::iterator p=lst.begin();
    while(p !=lst.end())
    {
        p--;
       cout << *p<<" ";
      
    }
    cout << "\n\n";
    p= lst.begin();
    while(p !=lst.end())
    {
      *p= *p + 100;
      p++;
    }
    cout << "Contents modified: ";
    p =lst.begin();
    while(p !=lst.end())
    {
        p++;
       cout << *p <<" ";
      
    }
    cout <<"list printed backward: \n";
    p=lst.end()
    while(p !=lst.begin());
    return 0;
}
