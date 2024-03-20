#include <iostream>
using namespace std;
int main(void)
{
    int a[10], i, value, flag = 0;
    cout << "\nEnter the element in array : ";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    cout << "\nEnter the removed element : ";
    cin >> value;
    for (i = 0; i < 10; i++)
    {
        if (a[i] == value)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element NOT found";
    }
    else
    {
        for (; i < 9; i++)
        {
            a[i] = a[i + 1];
        }
    }
    cout<<"\nArray after element removed : ";
    for ( i = 0; i < 9; i++)
    {
        cout<<a[i]<<" ";
    }
    
}