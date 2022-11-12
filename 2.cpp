#include<iostream>
using namespace std;

class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int hr, int mit, int sec)
        {
            h=hr;
            m=mit;
            s=sec;
        }
        void showTime()
        {   
            cout<<h<<" Hours "<<m<<" Mintus "<<s<<" Seconds"<<endl;
        }
        void normalize()
        {
            m = m + s / 60;
            s = s % 60;
            h = h + m / 60;
            m = m % 60;

        }
        Time add(Time t)
        {
            Time temp;
            temp.s = s + t.s;
            temp.m = m + t.m;
            temp.h = h + t.h;
            temp.normalize();
            return temp;
        }
};

int main()
{
    Time t1,t2,t3;
    t1.setTime(3,74,95);
    t2.setTime(1,34,46);
    t1.normalize();

    t3=t1.add(t2);
    
    t1.showTime();
    t3.showTime();
    return 0;
}

