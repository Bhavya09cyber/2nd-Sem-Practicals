#include<iostream>
using namespace std;

class item
{
private:

int idno;
string name;
float price;
int quantity;

public:
item()
{
    idno=0;
    name="";
    price=0;
    quantity=0;
}

item(int id,string n,float p,int q)
{
    idno=id;
    name=n;
    price=p;
    quantity=q;
}

void addstocks(int q)
{
    quantity+=q;
    cout<<"items added successfully";
}
void sellstocks(int q)
{
    if(q<quantity)
    {
        quantity-=q;
        cout<<"item sold successfully";
    }
    else
    {
      cout<<" not enough stocks ";
    }
}


void display()
    {
    cout << "\nID: " << idno;
    cout << "\nName: " << name;
    cout << "\nPrice: " << price;
    cout << "\nQuantity: " << quantity << endl;
    }

};

int main()
{

    int n;
    cout << "Enter number of items: ";
    cin >> n;

    item t[50];
    for (int i = 0; i < n; i++)
    {
        int id, quantity;
        string name;
        float price;

        cout << "\nEnter ID, Name, Price, Quantity: ";
        cin >> id >> name >> price >> quantity;

        t[i] = item(id, name, price, quantity);
    }


    cout << "\nInventory Details \n";
    for (int i = 0; i < n; i++)
    {

           t[i].display();
    }
    return 0;

}
