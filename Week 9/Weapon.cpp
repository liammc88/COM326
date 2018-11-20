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

Weapon::Weapon(std::string weaponName, int value, float weight, int hitStrength, int health)
	: Item{ weaponName, value, weight }, weaponHitStrength_{ hitStrength }, weaponHealth_{ health } {
	std::cout << "Constructor for Weapon 1" << std::endl;
}

//getters and setters
void Weapon::SetWeaponName(std::string weaponName) {		//question this?????
	weaponName = weaponName;
}

//std::string Weapon::SetWeaponName() {
//	return weaponName;
//}

void Weapon::SetWeaponStrength(int hitStrength) {
	weaponHitStrength_ = hitStrength;
}

//void Weapon(std::string weaponName, int value, float weight, int hitStrength, int health)
//	: Item(weaponName), value_{ value }, weight_{ weight }, hitStrength_{ hitStrength }, health_{ health } {
//	//std::cout << "Default constructor for Weapon" << std::endl;
//}
