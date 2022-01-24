#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};

int main()
{
    // Person p[2];
    // cout << "Enter 2 person details: " << endl;

    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "enter details of person " << (i + 1) << endl;
    //     cin >> p[i].name;
    //     cin >> p[i].age;
    //     cin >> p[i].salary;

    //     cout << "details of person " << (i + 1) << endl;
    //     cout << "name " << p[i].name << endl;
    //     cout << "age " << p[i].age << endl;
    //     cout << "salary " << p[i].salary << endl;
    // }

    Person p1;
    Person *ptr = &p1;
    cin >> ptr->name;
    cin >> ptr->age;
    cin >> ptr->salary;

    cout << "details of person " << endl;
    cout << "name " << ptr->name << endl;
    cout << "age " << ptr->age << endl;
    cout << "salary " << ptr->salary << endl;

    return 0;
}