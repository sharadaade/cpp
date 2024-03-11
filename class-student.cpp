#include <iostream>
using namespace std;
class Student
{
private:
    int a[6], sum = 0, outOfMarks = 600, per;

public:
    void setSubMark(int[])
    {
        cout << "\nEnter the six subject mark : ";
        for (int i = 0; i < 6; i++)
        {
            cin >> a[i];
        }
    }
    void calPer()
    {
        for (int i = 0; i < 6; i++)
        {
            sum = sum + a[i];
        }
        per = (sum * 100) / outOfMarks;
        cout << "\nthe percentage is : " << per;
        cout << "\nthe percentage is : " << sum;
    }
    void checkGrades()
    {
        if (per > 75 && per <= 100)
            cout << "\nOutstanding";
        else if (per > 65 && per <= 75)
            cout << "\nFirst Class";
        else if (per > 50 && per <= 65)
            cout << "\nSecond class";
        else if (per > 40 && per <= 50)
            cout << "\nThird class";
        else
            cout << "\nYour are failed";
    }
};
int main(void)
{
    int x[6];
    Student s;
    s.setSubMark(x);
    s.calPer();
    s.checkGrades();
}