// DMA allows you to set array size dynamically during run time rather
// than at compile time. This helps when the program doesnt know in advance about the number
// of items(variable values) to be stored

#include<iostream>
using namespace std;
int main(){
    int size;
    int *ptr;

    cout<<"Enter the number of values you want to store: "<<endl;
    cin>>size;

    ptr = new int[size];
    cout<<"Enter the values to be stored in array"<<endl;
    for(int i=0;i<size;i++){
        cin>>ptr[i];
    }
    cout<<"Values in array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i]<<endl;
    }
    
    return 0;
}