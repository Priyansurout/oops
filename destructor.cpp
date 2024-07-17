#include <iostream>
#include <string>
using namespace std;

class Customer
{

    string name;
    int *data;

public:
    Customer()
    {
        name = "Priyansu";
        data = new int;
        cout << "data: " << data << " *data :" << *data << endl;
        *data = 100;
        cout << "data: " << data << " *data :" << *data << endl;
        cout << "Consuter is call for Customer!!" << endl;
    };

    // Destructor
    ~Customer()
    {

        cout << "data: " << data << " *data :" << *data << endl;
        delete data;
        cout << "data: " << data << " *data :" << *data << endl;
        cout << "Destructor is call for Customer!!" << endl;
    }
};

int main()
{
    Customer A1;
    return 0;

    Customer *A2 = new Customer;
    delete A2;
}