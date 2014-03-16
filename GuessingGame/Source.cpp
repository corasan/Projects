#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {
	// woop!
	int guess; 
	srand(time(0));
	int random = rand() % 20+1;
	int tries = 0;

	cout << "Guess a number between 1-20, you have 3 tries: ";
	cin >> guess;
	
	while (guess != random && tries < 2) {
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
		cout << "You win! Te ganate un quipe sin carne woop!" << endl;
	}
	else {
		cout << "You  lost. The number was " << random << endl;
		cin >> guess;
	}
	//system("PAUSE") is not good practice to use or have!
	cin.sync();
	cin.get();
	return 0;
}
