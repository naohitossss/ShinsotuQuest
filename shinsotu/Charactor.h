#pragma once	

#include <string>
#include "Position.h"

class Charactor {
	public:
		Charactor() = default;
		virtual ~Charactor() = default;

		virtual void IncreaseHp(int& hp) = 0;
		virtual void DecreaseHp(int& hp) = 0;
		virtual void AddExp(int& exp) = 0;
		virtual void Destroy() = 0;
private:
	std::string _name;
	int _hp;
	int _maxHp;
	int _power;
	Position _level;
	int _exp;
	bool _isDead;

	
	


};