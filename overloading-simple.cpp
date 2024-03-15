#include<iostream>
using namespace std;
int operation(int a, int b)
{
    return a+b;
}
int operation(float c, float d)
{
    return c*d;
}
int main(void)
{
    int add = operation(5, 5);
    float multi = operation(2.2f,4.4f);
    cout<<add<<endl;
    cout<<multi<<endl;
}