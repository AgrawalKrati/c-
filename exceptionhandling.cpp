#include<iostream>
using namespace std;

int main()
{
int n1,n2;
int result;


cout << "enter first no"<<endl;
cin >>n1;
cout << "enter second no"<<endl;
cin>>n2;


try{
  if(n2==0)
     throw n2;
   else{
      result=n1/n2;
      cout<<"\n The result is :"<<result;
   }
 }
 
 catch(int x){
  cout<<"\nCan't divide by: "<<x;
}

cout<<"\n End of program.";
return 0;
}
