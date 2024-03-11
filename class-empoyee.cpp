#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    string n;
    int i, bs;
    float tlSal;

public:
    void setPersInfo(string name, int id, int basicSal)
    {
        n = name;
        i = id;
        bs = basicSal;
    }
    void setProgressPer(int progress)
    {
        if (progress >= 60)
        {
            tlSal = bs + (bs * 30 / 100);
        }
        else
        {
            tlSal = bs;
        }
    }
    void show()
    {
        cout << "\nname is " << n << "\nid is " << i << "\nbasic salary is " << bs;
        cout << "\nTotal sal is : " << tlSal;
    }
};
int main(void)
{
    Employee obj;

    string n;
    int id, bs, progress;
    cout << "\nEnter the name, id, basic Sal : ";
    cin >> n >> id >> bs;
    obj.setPersInfo(n, id, bs);
    cout << "\nEnter the progress (in percentage) : ";
    cin >> progress;
    obj.setProgressPer(progress);
    obj.show();
}