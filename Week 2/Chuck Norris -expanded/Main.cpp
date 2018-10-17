//Main.cpp
//Week 2
//Session 1
//Challenge 1
//Task 2 & 3
//Description: Compares 2 strings entered and searches for secret messages. Also converts two strings into lowercase
//Author: Liam McCormick
//Date: 02/10/18

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s1, s2;

	cout << "Enter your first string" << endl;
	getline(cin, s1);

	cout << "Enter your second string" << endl;
	getline(cin, s2);

	char yn;

	if (s1.find("Holiday") != string::npos || s1.find("Belize") != string::npos) {		//find secret message for spy
		cout << "Are you a secret agent? (Y/N)" << endl;
		cin >> yn;

		if (yn == 'Y' || 'y') {
			cout << "You've been shot!" << endl;
		}
	}

	transform(s1.begin(), s1.end(), s1.begin(), (int(*) (int)) tolower);	//convert s1 into lowercase
	transform(s2.begin(), s2.end(), s2.begin(), (int(*) (int)) tolower);	//convert s2 into lowercase

	if (s1 == s2) {
		cout << "This pleases Chuck Norris!" << endl;
	}
	else
		cout << "I pity the fool" << endl;
}