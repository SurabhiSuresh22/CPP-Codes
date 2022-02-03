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
    //default constructor
    Cars()
    {
        comp_name = "toyota";
    }

    // parameterized constructor
    Cars(string mname, string ftype, float m, double p)
    {
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }

    // copy constructor
    Cars(const Cars &obj)
    {
        comp_name = obj.comp_name;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }

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
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }

    ~Cars()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Cars car1, car2("fortuner", "diesel", 10, 350000); // objects are nothing but varibles of type class
    car1.setData("toyota", "altis", "petrol", 10.5, 150000);
    car1.getData();
    car2.getData();
    Cars car3 = car1; // copy constructor
    car3.getData();
    return 0;
}