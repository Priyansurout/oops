#include <iostream>
#include <string>
using namespace std;

class Student
{

private: /// Public    //private /// protected ----> accuse modifer
    int age, roll_number;
    string name;
    string grade;

public:
    void setdetail(string n, int a, int rn, string g)
    {
        if (n == "Dipesh")
        {
            cout << "Bro let some where else. This is not place we live in" << endl;
            return;
        }

        name = n;
        age = a;
        roll_number = rn;
        grade = g;
    };

    void getdetail()
    {

        cout << "name: " << name << " / age: " << age << " / roll number: " << roll_number << " / grade: " << grade << endl;
    }
};

int main()
{

    cout << "Hello, World" << endl;

    Student s1;

    s1.setdetail("Priyansu", 19, 2012, "A");
    s1.getdetail();

    Student s2;
    s2.setdetail("Dipesh", 19, 1990, "A+");
    s2.getdetail();

    cout << "size of student is: " << sizeof(s2) << endl;
    cout << "Address of obj1: " << &s1 << endl;
    cout << "Address of obj2: " << &s2 << endl;

    Student *st = new Student;

    return 0;
}