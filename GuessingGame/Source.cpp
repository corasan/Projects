#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main() {

	int guess; 
	srand(time(0));
	int random = rand() % 20;
	int tries = 0;

	cout << "Guess a number between 1-20, you have 3 tries: ";
	cin >> guess;
	
	while (guess != random && tries < 3) {
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
		cout << "The number was " << random << endl;
		cin >> guess;
	}
	system("pause");
	return 0;
}