#include<iostream>
using namespace std;

class Box 
{   
    int length,breadth,height;
    float volume;
public:
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    void Volume()
    {
        volume = length*breadth*height;
    }
    void showdata()
    {   
        cout<<"\nArea of box is  : "<<volume;        
    }
};

int main()
{
    Box b(2,3,4);
    b.Volume();
    b.showdata();
    return 0;

}