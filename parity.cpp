#include<iostream>

using namespace std;

int main(){
	int num;
	cout << "Enter an integer to get its parity : ";
	cin >> num;
	if(num % 2 == 0){
		cout << num << " is an even integer.";
	}
	else{
		cout << num << " is an odd integer.";
	}
	return 0;
}
