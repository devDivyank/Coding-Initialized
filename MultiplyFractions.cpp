#include <iostream>
#include <string>
using namespace std;

struct fraction{
	int numerator;
	int denominator;
};

fraction getFraction();
void multiplyFraction(fraction obj1, fraction obj2);

int main()
{
    fraction first = getFraction(); 
    fraction second = getFraction();
    
    multiplyFraction(first, second);
    
    return 0;
}

fraction getFraction (){
	fraction temp;
	
	cout << "Enter the numerator : \n";
	cin >> temp.numerator;
	
	cout << "Enter the denominator : \n";
	cin >> temp.denominator;
	cout << "\n";
	
	return temp;
}

void multiplyFraction(fraction obj1, fraction obj2){
	cout << static_cast<float>(obj1.numerator * obj2.numerator) / (obj1.denominator* obj2.denominator);
	
}
