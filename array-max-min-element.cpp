#include <iostream>
using namespace std;
int main(void)
{
    int a[10], i, z, choice;

    cout << "Enter the element in array : ";
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    do
    {
        cout << "1.Max\n2.Min";
        cin>>choice;
        switch (choice)
        {
        case 1:
            
            break;

        case 2:
            
            break;
        
        default:
            cout<<"Choice is invalid ";
            break;
        }


        cout << "\nDo you want to continue : Y=1 / N=0 ";
        cin >> z;
    } while (z);
}