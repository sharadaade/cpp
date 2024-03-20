#include <iostream>
#include<string.h>
using namespace std;
string tab()
{
    return "\t";
}
class Customer
{
private:
    int id;
    string customerName, contact;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setName(string name)
    {
        this->customerName = customerName;
    }
    string getName()
    {
        return customerName;
    }
    void setContact()
    {
        this->contact = contact;
    }
    string getContact()
    {
        return contact;
    }
};
class Product
{
private:
    int id, costPrice, sellingPrice;
    string productName;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setProductName(string productName)
    {
        this->productName=productName;
    }
    string getProductName()
    {
        return productName;
    }
    void setCostPrice(int costPrice)
    {
        this->costPrice=costPrice;
    }
    int getCostPrice()
    {
        return costPrice;
    }
    void setSellingPrice(int sellingPrice)
    {
        this->sellingPrice=sellingPrice;
    }
    int getSellingPrice()
    {
        return sellingPrice;
    }
};
class Company
{
    private:
        Customer *c;
        Product *p;
    public:
        void setProduct(Product p[])
        {
            this->p=p;
        }
        void showProduct()
        {
            for(int i=0;i<2;i++)
            {
                cout<<p[i].getId()<<tab()<<p[i].getProductName()<<tab()<<p[i].getSellingPrice()<<"\n";
            }
        }
};
int main(void)
{
    int id, costPrice, sellingPrice;
    string productName;

    Company c; 
    Product p[2];

    for(int i=0;i<2;i++)
    {
        cout<<"Enter product id name sp";
        cin>>id>>productName>>sellingPrice;
        p[i].setId(id);
        p[i].setProductName(productName);
        p[i].setSellingPrice(sellingPrice);
    }
    c.setProduct(p);
    c.showProduct();

}
