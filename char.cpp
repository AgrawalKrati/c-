#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   fstream fin;
   fin.open("data.txt");
   int count = 0;
   char word[30];
   string str;
   if(!fin)
    cout << "file does not open" << endl;
   else{
     // while(fin>>word)
      //count++;
      
      while(getline(fin, str))
      count++;
   }
   
   cout << "total lines: " << count << endl;
   fin.close();
   }

