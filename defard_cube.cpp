#include<iostream>
using namespace std;

int cubevol(int l=5,int w=6,int h=7)
    {
        return  l*w*h;
    }

int main()
{
    cout<<cubevol()<<endl;
    cout<<cubevol(10)<<endl;
    cout<<cubevol(2,4)<<endl;
    cout<<cubevol(2,3,4)<<endl;
    return 0;
}
