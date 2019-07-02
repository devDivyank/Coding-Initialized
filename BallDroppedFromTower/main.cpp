#include <iostream>
#include <string>
#include "constants.h"
using namespace std;

double getHeight();
double ballHeight(int t);

int main(){

	/*cout << "What is the tower's height in metres? \n";
	double height;
	cin >> height;
	int i=0;*/
	
	double height=getHeight();
	int i;
	
	do{
		cout << "\nAt " << i << " seconds, the ball is at height: " << (height - ballHeight(i)) << " meters \n";
		i++;
	} while ((height-ballHeight(i))>=0);
	
	if ((height-ballHeight(i))<=0){
		cout << "\nThe ball is on the ground now.";
	}
	
	return 0;
}

double getHeight(){
	cout << "What is the tower's height in metres? \n";
	double height;
	cin >> height;
	
	return height;
}

double ballHeight(int t){
	double dist, seconds;
	seconds = t;
	dist = myConstants::g * (seconds*seconds) / 2;
	
	return dist;
}
