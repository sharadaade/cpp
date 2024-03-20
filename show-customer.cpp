#include <iostream>
#include <string.h>
using namespace std;
class Customer
{
private:
    int id;
    char name[50];
    char cont[10];

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
    char *getName()
    {
        return name;
    }
    void setCont(char cont[])
    {
        strcpy(this->cont, cont);
    }
    char *getCont()
    {
        return cont;
    }
};
class Product
{
private:
    Customer *c;

public:
    void addProduct(Customer ct[])
    {
        this->c = ct;
    }
    void showProduct()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "\n"<< c[i].getId() << "\t" << c[i].getName() << "\t" << c[i].getCont();
        }
    }
};
int main(void)
{
    // int size;
    // cout << "\nEnter the size of product : ";
    // cin >> size;
    // Customer *ct = (Customer *)malloc(sizeof(Customer) * size);
    // Product *p = (Product *)malloc(sizeof(Product) * size);
    Customer c[3];
    Product p;
    int id;
    char name[50];
    char cont[10];
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter the id name contact : ";
        cin>>id>>name>>cont;
        c[i].setId(id);
        c[i].setName(name);
        c[i].setCont(cont);

    }
    p.addProduct(c);
    p.showProduct();
}
