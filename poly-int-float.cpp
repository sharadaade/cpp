#include<iostream>
using namespace std;

void print(int x)
{
    cout<<"printing integer : "<<x<<endl;
}

void print(float x)
{
    cout<<"printing float : "<<x<<endl;
}

int main(void)
{
    print(10);
    print(9.9f);
}