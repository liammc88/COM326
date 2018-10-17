//Main.cpp
//Week 1
//Challenge 2
//Description: FizzBuzz challenge
//Author: Liam McCormick
//Date: 25/09/18

#include <iostream>
using namespace std;

int main() {
	int i;
	cout << "Enter a number greater than 1" << endl;
	cin >> i;

	if (i % 15 == 0) {					//if i is multiple of 3 & 5
		cout << "Fizzbuzz" << endl;
	}
	else if (i % 5 == 0) {				//if i is multiple of 5, and not 3
		cout << "Buzz" << endl;
	}
	else if (i % 3 == 0) {				//if i is multiple of 3, and not 5
		cout << "Fizz" << endl;
	}
	else
		cout << i << endl;				//otherwise print i

	return 0;
}