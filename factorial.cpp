#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a number to find factorial"<<endl;
	int x, fact;
	cin>>x;
	fact = x;
	
	while (x>1){
		x--;
		fact = fact*x;
	}
	cout<<fact<<endl;
	return 0;
}
