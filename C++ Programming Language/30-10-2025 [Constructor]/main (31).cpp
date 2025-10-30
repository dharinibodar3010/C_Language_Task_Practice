#include<iostream>
using namespace std;

class student
{
    //method
    public:
    void display()
    {
        cout<<"Hii";
    }
};

int main()
{
    student s1;
    
    s1.display(); // method call
    
    return 0;
}