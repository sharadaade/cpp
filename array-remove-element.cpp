#include<iostream>
using namespace std;
int main(void)
{
    int a[10], i, value;
    cout<<"\nEnter the element in array : ";
    for (i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cout<<"\nEnter the removed element : ";
    cin>>value;
    for(i=0;i<10;i++)
    {
        if(a[i]==value)
        {
            
        }
        else
        {
            cout<<"Element NOT found";
        }
    }
    
}