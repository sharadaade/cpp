#include<iostream>
#include<string.h>
using namespace std;
class Rectangle
{
    private:
    int l, b;
    public:
    Rectangle()
    {
        l=0;
        b=0;
    }
    Rectangle(int l)
    {
        this->l=l;
        b=l;
    }
    Rectangle(int length, int breath)
    {
        l=length;
        b=breath;
    }
    void CalculateArea()
    {
        cout<<"\nArea : "<<l*b;
    }

};
int main(void)
{
    int l, b;
    cout<<"Enter the length and breadth : ";
    cin>>l>>b;
    Rectangle ob1;
    ob1.CalculateArea();
    Rectangle ob2(l);
    ob2.CalculateArea();
    Rectangle ob3(l, b);
    ob3.CalculateArea();
}