#include <iostream>
#include <string>
using namespace std;

class Customer
{

    string name;
    static int total_customer;
    static int total_balance;
    int account_number, balance;

public:
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
        total_balance += balance;
    }

    static void acceStatic()
    {
        cout << "Total customer: " << total_customer << endl;
    }

    void dispaly()
    {
        cout << "UID: " << total_customer << " Name: " << name << "/ account_number: " << account_number << "/ balance: " << balance << endl;
    }
    void display_total()
    {

        cout << "Total customer: " << total_customer << endl;
    }

    static void display_total_balance()
    {

        cout << "display_total_balance " << total_balance << endl;
    }
};

int Customer::total_customer = 0;
int Customer::total_balance = 0;

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

    // Customer::total_customer = 10;
    Customer::acceStatic();
    Customer::display_total_balance();
    A1.display_total();
    return 0;
}