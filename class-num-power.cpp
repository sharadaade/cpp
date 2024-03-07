#include <iostream>
#include <math.h>
using namespace std;
class Power
{
private:
    int base, index, result;

public:
    void acceptNum()
    {
        cout << "Enter the base and index respectively : ";
        cin >> base >> index;
    }
    void getPower()
    {
        int result = pow(base, index);
        cout<<"The power is "<<result;
    }
};
int main(void)
{
    Power obj1;
    obj1.acceptNum();
    obj1.getPower();
}