//Main.cpp
//Week 2
//Session 1
//Challenge 2
//Description: counts number of words from camel case
//Author: Liam McCormick
//Date: 02/10/18

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "Enter the string" << endl;
	cin >> s;

	int count(1);							//must start at 1 as first word is not capitalised

	for (int i = 0; i < s.size(); ++i) {	//counts number of uppercase letters
		if (::isupper(s[i])) {
			count++;
		}
	}
	cout << "Number of words: " << count << endl;
	system("\n pause");
}