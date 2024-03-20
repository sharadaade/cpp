#include <iostream>
#include<string.h>
using namespace std;
int main(void)
{
    char s[10];
    int flag = 0;
    int i = 0;
    cout << "Enter the string : ";
    gets(s);

    int len = strlen(s);
    int j = len - 1;
    
    for (i = 0; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"NOT Palindrome"<<endl;
    }
}