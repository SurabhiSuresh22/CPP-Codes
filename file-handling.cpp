// file are used to store data permanently
// a stream is an abstraction thatrepresent a device in which input and
// output operations are performed.
// a stream can represented as a source or destination of character of indefinite length.
//fstream can perform both input and output
//ifstream is output

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter your name and age" << endl;
    cin.getline(arr, 100); // proper input including space

    fstream myfile("xyz.txt", ios::out | ios::app);
    // write to a file
    ofstream myfile("xyz.txt", ios::app);
    myfile << arr;
    myfile.close();
    cout << "File closed" << endl;

    cout << "Reading from file- operation started" << endl;
    char arr1[100];
    ifstream obj("xyz.txt");
    obj.getline(arr1, 100);
    cout << "Array content: " << arr1 << endl;
    cout << "File read operation completed succesfully";
    obj.close();

    return 0;
}