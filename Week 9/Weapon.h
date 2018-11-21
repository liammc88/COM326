//Weapon.h
//Description: declaration for Weapon class
//Author: Liam McCormick
//Date: 20/11/2018

#pragma once
#include <iostream>
#include <string>

class Weapon : public Item {
private:
	int weaponHitStrength_;
	int weaponHealth_;

public:
	Weapon();
	Weapon(std::string weaponName, int value, float weight, int hitStrength, int health);

	void SetWeaponName(std::string weaponName);
	std::string GetWeaponName();
	void SetWeaponHitStrength(int weaponHitStrength);
	int Weapon::GetWeaponHitStrength();
	void Weapon::SetWeaponStrength(int health);
	int Weapon::GetWeaponStrength();
	std::string Weapon::ToString();
};

