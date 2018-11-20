//Item.h
//Description: declaration for Item class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include <iostream>
#include <string>

class Item {
private:
	std::string itemName_;
	int itemValue_;
	float weight_;
	std::string itemString_;

public:
	//constructor and destructors
	Item();
	Item(std::string itemName, int itemValue, float weight);
	~Item();
	std::string ToString();

	//getters and setters
	void SetItemName(std::string itemName);
	std::string GetItemName();
	void SetItemValue(int itemValue);
	int GetItemValue();
	void SetWeight(float weight);
	float GetWeight();
};
