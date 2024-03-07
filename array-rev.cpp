#include<iostream>
using namespace std;
int main(void)
{
    int a[10], i, j, t;
    cout<<"Enter the element in array : ";
    for (i = 0; i < 10; i++)
    {
        cin>>a[i];
    }

    cout<<"\nOriginal Array : ";
    for (i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }

    i = 0, j = 9;

    while (i<=j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }

    cout<<"\nAfter the reverse the array : ";
    for (i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
}