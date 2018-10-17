//Main.cpp
//Week 1
//Challenge 1
//Task 1
//Description: Print ASCII numbers for letters A to Z
//Author: Liam McCormick
//Date: 25/09/18

#include <iostream>
using namespace std;

int main() {
	char c;

		for (c = 'a'; c <= 'z'; c++) {
			cout << c << " = " << (int)c;
			cout << "\n";
		}
	return 0;
}