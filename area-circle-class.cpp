#include<iostream>
using namespace std;
class Circle
{
    private:
        float r;

    public:
        void setRadius(float radius)
        {
            r = radius;
        }
        float showArea()
        {
            return (3.14*r*r);
        }
};
int main(void)
{
    float radi;
    Circle obj;
    cout<<"Enter the radius : "<<endl;
    cin>>radi;
    obj.setRadius(radi);
    float result = obj.showArea();
    cout<<"The area of circle is : "<<result;
}