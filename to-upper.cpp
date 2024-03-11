#include<iostream>
#include<cstring>
using namespace std;
int main() {
    string str = "hello world";
    cout<<str.length()<<endl;
    for(int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    cout << str << endl;
    return 0;
}