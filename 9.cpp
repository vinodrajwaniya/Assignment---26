#include<iostream>
using namespace std;

class Bill
{
    int unit;
    float total;
public:
    void get()
    {   
        cout<<"Enter unit  :  ";
        cin>>unit;   
    }
    void calcuate()
    {
        if(unit<=100)
            total = unit*1.20;
        else if (unit<=200)
            total = 100*1.20+(unit-100)*2;
        else
            total = 100*1.20+100*2+(unit-200)*3;
            
        cout<<"\n\nTotal unit bill is : "<<total<<endl;
    }
};

int main()
{
    Bill b1,b2;
    b1.get();
    b1.calcuate();
    return 0;
}