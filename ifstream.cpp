#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ifstream input; string str;
   input.open("data.txt");
   if(!input)
    cout << "file does not open" << endl;
   else{
     // while(input>>str){
      //cout << str << " " << endl;
      
      while(getline (input, str)){
      cout << str << endl;
      }
      }
   
   }

