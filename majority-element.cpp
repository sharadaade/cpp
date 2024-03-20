#include<iostream>
using namespace std;
int main(void)
{
    int a[10], i, j;
    cout<<"Enter the element in array : ";
    for (i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    // Sorting logic
    for ( i = 0; i < 10; i++)
    {
        for (j = (i+1); j < 10; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"\nSorted array : ";
    for (i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }

    for ( i = 0; i < 10; i++)
    {
        
    }
    
}