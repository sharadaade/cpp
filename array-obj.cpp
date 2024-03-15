#include<iostream>
using namespace std;
class Detail
{
    private:
    int id;
    string name;
    public:
    void setData()
    {
        cout<<"Enter id, name : ";
        cin>>id>>name;
    }
    void getData()
    {
        cout<<"\n"<<id<<"\t"<<name;
    }
};
int main(void)
{
    Detail d[3];
    int i;
    for(i=0; i<3;i++)
    {
        d[i].setData();
    }
    cout<<"\nDisplay : \n";
    for(i=0;i<3;i++)
    {
        d[i].getData();
    }

}