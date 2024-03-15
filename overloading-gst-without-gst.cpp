#include<iostream>
using namespace std;
int bill(int qnt, int rate)
{
    return qnt*rate;
}
int bill(int qnt, int rate, int gstRate)
{
    int amt = (qnt*rate)*gstRate/100;
    return (qnt*rate)+amt;
}
int main(void)
{
    int qnt, rate, gstRate;
    cout<<"\nEnter the quantity, rate, GST-rate : ";
    cin>>qnt>>rate>>gstRate;
    int billWithoutGST = bill(qnt,rate);
    int billWithGST = bill(qnt,rate,gstRate);
    cout<<"Bill without GST : "<<billWithoutGST<<endl;
    cout<<"Bill with GST : "<<billWithGST<<endl;
}