#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name;
    int age, weight;
};

class Student : protected Human
{
    int roll_number, fees;

public:
    void func(string name, int age, int weight)
    {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }

    void display()
    {
        cout << "name: " << name << " age: " << age << " weight: " << weight << endl;
    }
};

int main()
{
    Student A;
    A.func("Priyansu Rout", 19, 54);
    A.display();
    return 0;
}