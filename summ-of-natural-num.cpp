#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout<<"Enter the terminating number : ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout<<endl<<"Addition is : "<<sum;
}