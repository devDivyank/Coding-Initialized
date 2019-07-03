#include <iostream>
#include <string>
#include "constants.h"
using namespace std;

double getHeight();
double droppedHeight(int t);

int main(){

	double height=getHeight();
	int i=0;
	
	do{
		cout << "\nAt " << i << " seconds, the ball is at height: " << (height - droppedHeight(i)) << " meters \n";
		i++;
	} while ((height-droppedHeight(i))>=0);
	
	if ((height-droppedHeight(i))<=0){
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

double droppedHeight(int t){
	double dist, seconds;
	seconds = t;
	dist = myConstants::g * (seconds*seconds) / 2;
	
	return dist;
}
