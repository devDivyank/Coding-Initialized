#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;


int main()
{
	int array[] = { 30, 60, 20, 50, 40, 10 };
	int swapped,i;
	
	while(1){
		swapped = 0;
		for(i=0;i<5;++i){
			if(array[i]>array[i+1]){
				int temp = array[i];
				array[i ] = array[i+1];
				array[i+1] = temp;
				swapped = 1;
			}
		}
		if(swapped==0){
			break;
		}
	}
	
	for(int i=0;i<=5;++i){
		cout << array[i] << "\n";
	}	
    return 0;
}
