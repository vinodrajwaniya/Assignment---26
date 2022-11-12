#include<iostream>
using namespace std;

class Date
{
    private:
        int date,mm,yy;
    public:
    Date()
    {
        date=22;
        mm=7;
        yy=2022;
    }
    void showdata()
    {
        cout<<"Date = "<<date<<", Month = "<<mm<<", Year = "<<yy<<",";
    }
};

int main()
{
    Date d1;
    d1.showdata();
    return 0;
}