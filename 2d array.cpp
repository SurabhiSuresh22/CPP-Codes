#include<iostream>
using namespace std;

int main(){
	int a[5][5];
	int b[2][2] ={1,2,3,4};
	int c[3][3] = {{1,1,1},{2,2,2},{3,3,3}};
	
	for(int i =0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl<<"Enter values for 2x2 matrix"<<endl;
	for(int i =0; i<2; i++){
		for(int j=0; j<2; j++){
			cin>>b[i][j];
		}
		cout<<endl;
	}
	
	cout<<endl<<"Enter values for 2x2 matrix"<<endl;
	for(int i =0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}

