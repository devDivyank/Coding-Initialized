#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void testUserGuess(int ans);
int chooseNumber();

int main()
{
	cout << "\nLets play a game! I'm thinking of a number. Guess it in 7 tries or you LOSE!\n";
	int chooseNumber();
	
	testUserGuess(chooseNumber());
	
	cout << "Do you want to try again?(y/n)\n";
	char response;
	cin >> response;
	cin.ignore(32767, '\n');
		
	while(response!='n'){
		if(response=='y'){
			main();
		}else{
			cout << "Invalid input. Enter again : \n";	
		}
		cin >> response;
	}
	cout << "Thank you for playing.";
	
    return 0;
}

int chooseNumber(){
	srand(time(0));
	int answer=(rand()%100)+1;
	
	return answer;
}
void testUserGuess(int ans){
	for (int i=1;i<8;++i){
		int userGuess;
		cin >> userGuess;
		cin.ignore(32767, '\n');
		if(userGuess<ans){
			cout << "Guess #" << i << " : " << userGuess << "\nYour guess is too low.\n";
			continue;
		}
		if(userGuess>ans){
			cout << "Guess #" << i << " : " << userGuess << "\nYour guess is too high.\n";
			continue;
		}
		if(userGuess==ans){
			cout << "CONGRATS! YOU WON!\n\n";
			return;
		}
	}
	cout << "\nYou lost! The number was " << ans << "\n\n"; 	
}
