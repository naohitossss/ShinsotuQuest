#include "Enemy.h"
#include <iostream>

void Enemy::IncreaseHp(int &hp)
{
	_hp += hp;
	std::cout << "Enemy's HP increased by " << hp << ". Current HP: " << _hp << std::endl;
}
void Enemy::DecreaseHp(int &hp) 
{
	_hp -= hp;
	std::cout << "Enemy's HP decreased by " << hp << ". Current HP: " << _hp << std::endl;
}
void Enemy::AddExp(int &exp) 
{
	_exp += exp;
}
void Enemy::Destroy() 
{
	std::cout << "Enemy destroyed!" << std::endl;
}