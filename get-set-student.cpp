#include <iostream>
#include <string.h>
using namespace std;

class Student
{
private:
    int rno, per;
    char name[90];

public:
    void setValue(int rno, char name[], int per)
    {
        this->rno = rno;
        this->per = per;
        strcpy(this->name, name);
    }
    int getRno()
    {
        return rno;
    }
    char *getName()
    {
        return name;
    }

    int getPer()
    {
        return per;
    }
};
int main(void)
{

    int size;
    cout<<"\nEnter the size of student : "<<endl;
    cin>>size;
    Student *s;
    s= (Student*)malloc(sizeof(Student)*size);
    int rno, per;
    char name[90];

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter the roll no, name, percentage : ";
        cin >> rno >> name >> per;
        s[i].setValue(rno, name, per);
    }

    for (int i = 0; i < size; i++)
    {
        int rno = s[i].getRno();
        char *name = s[i].getName();
        int per = s[i].getPer();
        cout<<rno<<"\t"<<name<<"\t"<<per<<"\n";
    }
}