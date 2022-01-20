#include <iostream>
using namespace std;

int main()
{

    int num, den, result;
    cout << "Enter numerator and denominator: " << endl;
    cin >> num >> den;

    try
    {
        if (den == 0)
        {
            throw den;
        }
        result = num / den;
    }
    catch (int ex)
    {
        cout << "Divide by zero not allowed" << ex << endl;
    }
    cout << "Division is: " << result;
    return 0;
}