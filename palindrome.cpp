#include<iostream>
using namespace std;

int main(){
	int n, num, digit, rev =0;
	cout<<"Enter a number: ";
	cin>>num;
	n = num;
	
	while(num!=0){
		digit = num%10;
		rev = (rev*10) + digit;
		num = num/10;
	}
	
	if(n == rev){
		cout<<n<<" Is a palindrome"<<endl;
	}
	else{
		cout<<"Not Palindrome"<<endl;
	}
	
	return 0;
}
