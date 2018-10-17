//Main.cpp
//Week 1
//Session 2
//Challenge 1
//Description: Gambler's Ruin challenge
//Date: 27/09/18

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int money;
	int target;
	int betValue = 1;

	cout << "How much money do you have?" << endl;		//ask about money user has to start with
	cin >> money;

	cout << "What is your target?" << endl;				//ask about their target
	cin >> target;

	while (money > 0 && money < target) {
		float random = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);	//random generator

		if (random < 0.5) {
			money = money + betValue;
			cout << "You have won! Pot is now: " << money << "\n";
		}
		else {
			money = money + betValue;
			cout << "You lost! Pot is now: " << money << "\n";
		}

		bool quit = false;
		char answer;

		while (!quit) {							//ask if they want to continue
			cout << "Do you want to play again? (Y/N)" << endl;
			cin >> answer;

			answer = toupper(answer);
			if (answer == 'Y') {
				quit = true;
			}
		}
	}
}