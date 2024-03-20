#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
    int id, sal;
    string name, email, address; 
    public:
    void setId(int id)
    {
        this->id=id;
    }
    int getId()
    {
        return id;
    }
    void setSal(int sal)
    {
        this->sal=sal;
    }
    int getSal()
    {
        return sal;
    }
    void setName(string name)
    {
        this->name=name;
    }
    string getName()
    {
        this->name=name;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    string getEmail()
    {
        return email;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    string getAddress()
    {
        this->address=address;
    }
};
class All
{
    private:
    Employee e;
    public:
    void setData(Employee emp)
    {
        emp = e;
    }
    
};
int main(void)
{
    cout<<"1.Add employee details :\n"<<"2.Show employee detail :\n"<<"3.Search Employee : ";
    cout<<"4.Delete employee details :"<<"5.Update Employee details :"<<"6.Sorting Employee details : ";
    cout<<"7.Display Highest salary employee :"<<"8.Display Second Highest salary employee : ";

}