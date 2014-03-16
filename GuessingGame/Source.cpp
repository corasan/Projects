#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	// woop!
	const int max_attempts = 3;//make it constant, since its value wont change
	int guess; 
	srand(time(0));
	int random = rand() % 20+1;
	int tries = 0;

	cout << "Guess a number between 1-20, you have " << max_attempts << " tries: ";
	cin >> guess;
	
	while (guess != random && tries < max_attempts) {
		if (guess < random) {
			cout << "Number is higher. Guess again: ";
			cin >> guess;
		}
		else if (guess > random) {
			cout << "Number is lower. Guess again: ";
			cin >> guess;
		}
		tries++;
	}

	if (guess == random){
		cout << "Correct! " << endl;
	}
	else {
		cout << "You  lost. The number was " << random << endl;
		cin >> guess;//why is there a cin>>guess here?
	}
	//system("PAUSE") is not good practice to use or have!
	cin.sync();
	cin.get();
	return 0;
}
