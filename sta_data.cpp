#include <iostream>
#include <string>
using namespace std;

class Customer
{

    string name;
    int account_number, balance;

public:
    static int total_customer;
    Customer()
    {
        cout << "Hi!! Welcome to our voult!" << endl;
    }
    Customer(string name, int account_number, int balance)
    {

        cout << "welcome the in our bank and we hope have lot of balance!!!" << endl;

        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
        total_customer++;
    }

    void dispaly()
    {
        cout << "UID: " << total_customer << " Name: " << name << "/ account_number: " << account_number << "/ balance: " << balance << endl;
    }
    void display_total()
    {

        cout << "Total customer: " << total_customer << endl;
    }
};

int Customer::total_customer = 0;

int main()
{

    Customer A1("Priyansu rout", 192004, 10000);
    Customer A2("Nova rout", 1138, 2000);
    A1.dispaly();
    A2.dispaly();

    Customer *A3 = new Customer;
    cout << "Address: " << A3 << endl;
    Customer A4("Priyansu rout", 192004, 10000);
    Customer A5("Nova rout", 1138, 5000);
    A5.dispaly();

    Customer::total_customer = 10;

    A1.display_total();
    return 0;
}