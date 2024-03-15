#include <iostream>
#include <string.h>
using namespace std;
class ConvertToUppercase
{
private:
    char c[90];

public:
    void setCharArray(char s[])
    {
        for (int i = 0; i < s[i]!='\0'; i++)
        {
            s[i] = toupper(s[i]);
        }
        strcpy(c,s);
    }
    void getString()
    {
        cout<<c;
    }
    
};
int main(void)
{
    ConvertToUppercase obj;
    char n[90];
    cout << "Enter the string : ";
    cin >> n;
    obj.setCharArray(n);
    obj.getString();
}