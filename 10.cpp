#include<iostream>
using namespace std;

class StaticCount 
{
    static int x;
public:
    static void set()
    {
        cout<<"Enter a number : ";
        cin>>x;
    }
    static int display()
    {
        return x;
    }
      
};
int StaticCount :: x=0;

int main()
{
    StaticCount s1,s2;
    StaticCount::set();
    StaticCount::display();
    return 0;

}