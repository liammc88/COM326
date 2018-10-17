//Main.cpp
//Week 2
//Session 1
//Challenge 1
//Task 1
//Description: Compares 2 strings entered
//Author: Liam McCormick
//Date: 02/10/18

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;

	cout << "Enter your first string" << endl;
	getline(cin, s1);

	cout << "Enter your second string" << endl;
	getline(cin, s2);

	if (s1 == s2) {
		cout << "This pleases Chuck Norris!" << endl;
	}
	else
		cout << "I pity the fool" << endl;
}