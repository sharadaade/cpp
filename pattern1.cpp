#include<iostream>
using namespace std;
int main(void)
{
    int i, j;
    for(i=1; i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }



    cout<<endl<<endl<<endl;


    for(i=1; i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}