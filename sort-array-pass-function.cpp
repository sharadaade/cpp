#include <iostream>
using namespace std;
void sorting(int a[])
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(void)
{
    int b[5], i, *ptr;
    cout << "\nEnter the element in array : ";
    for (i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    ptr = b;
    sorting(ptr);
    cout<<"\nArray after sorting : "<<endl;
    for (i = 0; i < 5; i++)
    {
        cout << b[i]<<" ";
    }
}