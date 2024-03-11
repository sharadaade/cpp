#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int l, w;

    public:
        void setLengthWidth(int len, int wid)
        {
            l = len;
            w = wid;
        }
        int showArea()
        {
            return (l*w);
        }
};
int main(void)
{
    int a, b, result;
    Rectangle obj;
    cout<<"Enter the length and width : ";
    cin>>a>>b;
    obj.setLengthWidth(a,b);
    result = obj.showArea();
    cout<<"\nThe area is : "<<result<<endl;

}