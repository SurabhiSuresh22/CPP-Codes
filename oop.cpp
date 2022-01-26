// emphasis on data rather than procedure. Programs are divided into objects.
// Data structures are designed such that they characterize the objects.
// functions that operate on the data of an object are tied together in that same datastructure.
// Data is hidden and cannot be directly accessed. private and public keywords are named as access specifiers.
// functions are usually present in public and variable in private. class instance declared in main can act on private data members as well as functions.

#include <iostream>
#include <string>
using namespace std;

class Cars
{
private:
    string comp_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    void setData(string cname, string mname, string ftype, float m, double p)
    {
        comp_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    void getData()
    {
        cout << "Company Name: " << comp_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Mileage" << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Cars car1; // objects are nothing but varibles of type class
    car1.setData("toyota", "altis", "petrol", 10.5, 150000);
    car1.getData();

    return 0;
}