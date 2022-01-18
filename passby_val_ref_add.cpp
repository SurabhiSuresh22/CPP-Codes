#include <iostream>
using namespace std;

void passByValue(int x, int y)
{
    int z = x;
    x = y;
    y = z;
}

void passByReference(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

void passByAddress(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int a = 5, b = 6;
    cout << "Before swapping: a- " << a << " b- " << b << endl;
    //passByValue(a, b);
    //passByReference(a, b);
    passByAddress(&a, &b);
    cout << "After swapping: a- " << a << " b- " << b << endl;
    return 0;
}