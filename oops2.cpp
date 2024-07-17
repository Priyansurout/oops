#include <iostream>
#include <string>
using namespace std;

class Customer
{

    string name;
    int acc_number;
    int balance;
    int init = 1;

public:
    Customer()
    {

        cout << "Hey!! thank you to make a account in our Bank. Customer - " << init << endl;
        init++;
        name = "PRIYANSU ROUT";
        acc_number = 192004;
        balance = 1000;
    };

    Customer(string n, int an, int bal)
    {

        name = n;
        acc_number = an;
        balance = bal;
    };

    void display()
    {

        cout << "Name: " << name << " balance: " << balance << " acc_number " << acc_number << endl;
    }

    Customer(Customer &B) // copy constructor
    {
        cout << " &B: " << &B << endl;
        name = B.name;
        acc_number = B.acc_number;
        balance = B.balance;
    }
};

int main()
{
    Customer A1;
    Customer A2("Nova", 2004, 100);
    A1.display();
    A2.display();

    Customer A3(A2);
    cout << "Address of A3: " << &A2 << endl;
    A3.display();

    Customer A4;
    A4 = A2;
    cout << " A4: ";
    A4.display();
    cout << endl;
    Customer A5;

    return 0;
}

// Destructor - it is an instance function that is invoked automatically when a object is going to be destroyed
// - it is last function call before a function is destructord