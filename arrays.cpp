#include<iostream>
using namespace std;

int main(){
	int arr[3] ={1,2,3};
	double arr1[5];
	arr1[0] = 1.345;
	arr1[1] = 3.456;
	
	char myarr[3];
	myarr[0] = 'a';
	
	int temp[5];
	cout<<"Enter 5 integer variables"<<endl;
	
	for(int i =0; i<5;i++){
		cin>>temp[i];
	}
	
	cout<<"Values you entered "<<endl;
	
	for(int i =0; i<5;i++){
		cout<<temp[i]<<endl;
	}
}
