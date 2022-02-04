#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    int real;
    float imaginary;

public:
    ComplexNumber()
    {
    }
    ComplexNumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }
    void displayData()
    {
        cout << "Complex number is: " << real << " + " << imaginary << "i" << endl;
    }
    int getReal()
    {
        return real;
    }
    int getImag()
    {
        return imaginary;
    }
};

ComplexNumber addnum(ComplexNumber n1, ComplexNumber n2)
{
    int r;
    float i;
    r = n1.getReal() + n2.getReal();
    i = n1.getImag() + n2.getImag();
    ComplexNumber temp(r, i);
    return temp;
}

int main()
{
    ComplexNumber c1(2, 3.5), c2(4, 5.5), c3;
    c1.displayData();
    c2.displayData();
    cout << "Addition result: ";
    c3 = addnum(c1, c2);
    c3.displayData();

    cout << "Pointer to object" << endl;
    ComplexNumber *ptr1;
    ptr1 = &c3;
    ptr1->displayData();

    ptr1 = &c1;
    ptr1->displayData();

    cout << ptr1;
    return 0;
}