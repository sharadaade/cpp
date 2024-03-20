#include <iostream>
using namespace std;
class Power
{
private:
    int index, base;

public:
    Power(int b, int i)
    {
        base = b;
        index = i;
    }
    void getPower()
    {
        int p = 1;
        for (int i = 1; i <= index; i++)
        {
            p = p * base;
        }
        cout<<"The power is : "<<p;
    }
};
int main(void)
{
    int base, index;
    cout<<"Enter the base and index : ";
    cin>>base>>index;
    Power ob(base, index);
    ob.getPower();
}