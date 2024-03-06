#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}

int add(float a, float b)
{
    return a*b;
}
int main(void)
{

    float x =  add(2.2f, 4.4f);
    cout<<x<<endl;
    int z = add(9, 9);
    cout<<z;
}