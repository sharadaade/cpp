#include <iostream>
using namespace std;
class Area
{

public:
    // void getRadius()
    // {
    //     cout<<"Enter the radius : ";
    //     cin>>radius;
    // }
    // void getLenWidth()
    // {
    //     cout<<"Enter the length and width : ";
    //     cin>>len>>width;
    // }

    // void getBaseHeight()
    // {
    //     cout<<"Enter the base and height : ";
    //     cin>>base>>height;
    // }
    void calArea(int r)
    {
        float circle = 3.14 * r * r;
        cout << "Area of circle : " << circle << endl;
    }

    void calArea(int l, int w)
    {
        int rect = l * w;
        cout << "Area of rectangle : " << rect << endl;
    }

    void calArea(int b, float h)
    {
        float triangle = 0.5*b*h;
        cout << "Area of rectangle : " << triangle << endl;
    }
};
int main()
{

    Area obj;
    float radius, len, width, base, height;
    cout << "Enter the radius : ";
    cin >> radius;
    obj.calArea(radius);

    cout << "Enter the length and width : ";
    cin >> len >> width;
    obj.calArea(len,width);
    
    cout << "Enter the base and height : ";
    cin >> base >> height;
    obj.calArea(base,height);

}