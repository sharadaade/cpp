#include <iostream>
using namespace std;
class Demo
{
private:
    int x;

public:
    Demo(Demo &obj)
    {
        this->x = obj.x;
    }
    Demo(int z)
    {
        x = z;
    }
    void show()
    {
        cout << "\n " << x;
    }
};
int main(void)
{
    Demo d1(10);
    Demo d2(d1);
    // Demo d2 = d1; // Copying directly
    d1.show();
    d2.show();
}