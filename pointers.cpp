// pointer is a variable whose value is the address of another variable
// You can save space, allows your to refer to same space in memory from multiple locations.
//This means that you can update memory on one locationa and change can be seem from another
//Dynamic memory allocation

#include<iostream>
using namespace std;
int main(){
    int var = 5;
    int *i;
    double *j;
    float *k;
    char *l;

    i = &var;

    cout<<"Variable value: "<<var<<endl;
    cout<<"Address in pointer"<<i<<endl;
    cout<<"Pointer pointing to value: "<<i<<endl;

    *i = 6;
    cout<<"Variable value: "<<var<<endl;
    cout<<"Address in pointer"<<i<<endl;
    cout<<"Pointer pointing to value: "<<i<<endl;
    
    return 0;
}
