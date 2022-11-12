#include<iostream>
using namespace std;

class Cube
{
    public:
        double side;
        double volume()
        {
            return side*side*side;
        }
        Cube (double side1)
        {
            cout<<endl<<"Constructor is called "<<endl;
            side = side1;
        }
        Cube()
        {
            cout<<endl<<"Default Constructor is called "<<endl;
        }
        ~Cube()
        {
            cout<<endl<<"Destructing "<<side<<endl;
        }
};

int main()
{
    Cube c1(2.34);
    Cube c2;
    cout<<endl<<"The side of the cube is: " <<c1.side<<endl;
    cout<<endl<<"The volum of first is "<<c1.volume()<<endl;
    cout<<"Enter the lenght of second cube : " ;
    cin>>c2.side;
    cout<<endl<<"The Volum of second cube is : "<<c2.volume()<<endl;
    return 0;

}