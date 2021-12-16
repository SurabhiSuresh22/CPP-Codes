#include <iostream>
using namespace std;

int main(){
	int a=0,b=1,c,n;
	cout<<"Enter the number of terms you want: ";
	cin>>n;
	
	cout<<"Fibonacci Series: "<<endl;
	
	for (int i =0;i<n;i++){
		cout<<a<<endl;
		c = a+b;
		a = b;
		b =c;
	}
	
}
