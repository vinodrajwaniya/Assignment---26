#include<iostream>
using namespace std;

class Bank
{
    int amt,time,interest;
    float si;
public:
    void getdata(int a, int ti, int in)
    {
        amt = a;
        time = ti;
        interest = in;
    }
    void Si()
    {
        si = amt*time*interest;
        cout<<"Simple Interest is : "<<si<<endl;
    }
};

int main()
{
    Bank b1,b2;
    b1.getdata(100,1,2);
    b1.Si();
    return 0;
}