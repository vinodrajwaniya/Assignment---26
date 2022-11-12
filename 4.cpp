#include<iostream>
using namespace std;

class Counter 
{
    private:
        static int count;
    public:
        Counter()
        {
            count++;
        }
        int get()
        {
            return count;
        }
};
int Counter::count=0;

int main()
{
    Counter c1,c2,c3;
    cout<<c2.get();
    return 0;
}