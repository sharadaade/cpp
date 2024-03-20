#include <istream>
#include <iostream>
using namespace std;
class Addition
{
private:
    int num;
    int sum=0;
public:
    Addition(int num)
    {
        this->num=num;
    }
    Addition(int num,Addition &obj)
    {
        this->num=num;
        sum=this->num+obj.num;
    }
    void show()
    {
        cout<<"\nSum is : "<<sum;
    }
};
int main(void)
{
    Addition a(10);
    Addition a1(20, a);
    a.show();
    a1.show();
}