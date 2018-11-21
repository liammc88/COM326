//Weapon.cpp
//Description: definition for Weapon class
//Author: Liam McCormick
//Date: 20/11/2018

#include <iostream>
#include <string>
#include "Weapon.h"
#include "Item.h"

//constructors and destructors
Weapon::Weapon() {
	std::cout << "Default constructor for Weapon" << std::endl;
}

Weapon::Weapon(): Item("Sword") {
	std::cout << "Derived class Weapon contructor called" << std::endl;
}

Weapon::Weapon(std::string weaponName, int value, float weight, int hitStrength, int weaponHealth)
	: Item{ weaponName, value, weight }, weaponHitStrength_{ weaponHitStrength }, weaponHealth_{ weaponHealth } {
	std::cout << "Constructor for Weapon 1" << std::endl;
}

//getters and setters
void Weapon::SetWeaponName(std::string weaponName) {		//question this?????
	weaponName = weaponName;
}

std::string Weapon::GetWeaponName() {
	return weaponName;
}

void Weapon::SetWeaponHitStrength(int weaponHitStrength) {
	weaponHitStrength_ = weaponHitStrength;
}

int Weapon::GetWeaponHitStrength() {
	return weapinHitStrength;
}

void Weapon::SetWeaponStrength(int health) {
	weaponHealth_ = weaponHealth;
}

int Weapon::GetWeaponStrength() {
	return weaponHealth;
}

//ToString();

std::string Weapon::ToString() {
	std::string weaponNameString = GetItemName();
	std::string weaponValueString = std::to_string(GetItemValue());
	std::string weaponHitStrengthString = std::to_string(GetWeaponHitStrength());
	std::string weaponHealthString = std::to_string(GetWeaponHealth());
	//std::string weight = std::to_string(GetWeight());

	return weaponString_ = "Weapon: " + weaponNameString + "Worth: " + weaponValueString + "Hit strength: " 
							+ weaponHitStrengthString + "Weapon health: " + weaponHealthString;
}


//void Weapon(std::string weaponName, int value, float weight, int hitStrength, int health)
//	: Item(weaponName), value_{ value }, weight_{ weight }, hitStrength_{ hitStrength }, health_{ health } {
//	//std::cout << "Default constructor for Weapon" << std::endl;
//}

