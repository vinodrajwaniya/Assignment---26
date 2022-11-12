#include<iostream>
using namespace std;

class Student
{
    private:
        char Grade;
        int id,rollno,classno;
    public:
        Student(char m, int a, int b, int c)
        {
            Grade = m;
            id = a;
            rollno = b;
            classno = c;
        }
    void showData()
    {
        cout<<"Id-"<<id<<", Roll no-"<<rollno<<", Class no.-"<<classno<<", Grade-"<<Grade<<endl;
        //cout<<endl;
    }
};

int main()
{
    Student s1('A', 1, 12, 5),s2('B',2,12,45);
    s1.showData();
    s2.showData();
    return 0;
}