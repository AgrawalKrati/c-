/*#include<iostream>
#include<fstream>
using namespace std;

class student{
public:
     int roll; char name[25]; float marks;
    
              void display(){
     fstream f; 
     student s;
 
     f.open("student.dat", ios::in|ios::binary);
         while(!f.eof()){
     f.read((char*) &s, sizeof(s));
     cout << "Roll "<<s.roll<< "Name" << s.name << "Mark: "<< s.marks << endl;}
     f.close();
     }
     
        

 void getdata(){
      cout << "enter roll no and name "<< endl;
      cin>>roll>>name;
      cout << "marks" << endl;
      cin>>marks;
 
 } 
 
 void AddRecord(){
        fstream f; student stu;
        f.open("Student.dat", ios::app|ios::binary);
        stu.getdata();
   f.write((char*)&stu, sizeof(stu));
        f.close();}

 
 

};

int main()
{
  student s;
   
  char ch='n';
  do{
    s.AddRecord();
     s.display();
    cout << "Want add more?(y/n)"<<endl;
    cin >> ch;
  } while(ch=='y'||ch=='Y');
  cout << "updated!!!" <<endl;

}*/


#include <iostream>
#include <fstream>



using namespace std;



class Student{
int roll;
char name[25];
float marks;



void getdata() {
cout << "Enter roll number and name: " << endl;
cin >> roll >> name;
cout << "marks: " << endl;
cin >> marks;
}



public: void AddRecord() {
fstream f;
Student stu;
f.open("student.dat", ios::app | ios::binary);
stu.getdata();



f.write((char *) &stu, sizeof(stu));
f.close();
}
public: void display() {
fstream f;
Student s;
f.open("student.dat", ios::in|ios::binary);
while(!f.eof()) {

f.read((char *) &s, sizeof(s));
cout << "Roll: " << s.roll << endl <<"Name: " << s.name << endl << "Marks: " << s.marks << endl;
}
f.close();
}
};

int main(){
Student s;
char ch = 'n';
do{
s.AddRecord();
cout << "Want to add more (y/n): " << endl;
cin >> ch;
} while(ch=='y' || ch=='Y');



cout << "Updated !!!" << endl;



s.display();



return 0;
}
