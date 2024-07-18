#include <iostream>
#include <string>
using namespace std;

class Human
{

protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {

        this->name = name;
        this->age = age;
    }

    void work()
    {
        cout << "let this shit Done!!" << endl;
    }
};

class Student : public Human
{

    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees) : Human(name, age)
    {

        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << "name: " << name << " age: " << age << " roll_number: " << roll_number << " fees: " << fees << endl;
    }
};

int main()
{

    Student S1("Priyansu", 19, 2012, 16);
    S1.work();
    S1.display();
    return 0;
}

// PONT TO NOTED IS - first it call parent conster and then it own conster
// and it run oppstie in distor