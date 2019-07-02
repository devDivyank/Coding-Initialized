#include <iostream>
#include <string>

using namespace std;

bool isEven(int x);

int main(){

	cout << "Enter an integer : \n";
	int number;
	cin >> number;
	
	if (isEven(number)){
		cout << "Number is even";
	} else {
		cout << "Number is odd";
	}
	
	return 0;
}

bool isEven(int x){
	return (x%2)==0;
}
