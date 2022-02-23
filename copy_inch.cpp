
#include<iostream>
using namespace std;

class Distance{
  public:
            float feet,inch;
  public:
           
            //PARAM CONSTRUCTOR
            Distance(float x,float y){
                cout<<"Inside param const"<<endl;
                feet=x;
                inch=y;
            }
};

int main()
{
    Distance dis1(5.8,6.88);

    cout<<"Values of Feet: "<<dis1.feet<<"  "<<"Values of Inch: "<<dis1.inch<<" "<<endl;
    return 0;
}

