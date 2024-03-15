#include <iostream>
using namespace std;
int size, i;
class Student
{
private:
    int id;
    char name[10];
    string address;
    float per;

public:
    void setData()
    {
        for (i = 0; i < size; i++)
        {
            cout << "Enter the id, name, address, per : ";
            cin >> id >> name >> address >> per;
        }
    }
    void getData()
    {
        for (i = 0; i < size; i++)
        {
            cout<<"\nid : "<< id << " name : " << name << " address : " << address << " per : "<< per; 
        }
    }
};
int main(void)
{
    cout << "\nEnter the no of student (size) : ";
    cin >> size;
    Student s[size];
    s->setData();
    s->getData();

}