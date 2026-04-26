#include "Player.h"
#include <iostream>

void Player::IncreaseHp(int& hp)
{
	_hp += hp;
	std::cout << "Enemy's HP increased by " << hp << ". Current HP: " << _hp << std::endl;
}
void Player::DecreaseHp(int& hp)
{
	_hp -= hp;
	std::cout << "Enemy's HP decreased by " << hp << ". Current HP: " << _hp << std::endl;
	if (_hp < 0) {
		Destroy();
	}
}
void Player::AddExp(int& exp)
{
	_exp += exp;
}
void Player::Destroy()
{
	std::cout << "TaiSha!" << std::endl;
}

void Player::AddItem(int itemId)
{
	_itemList.push_back(itemId);
	std::cout << "Added item with ID: " << itemId << " to inventory." << std::endl;
}
void Player::UseItem(int itemId)
{
	
}