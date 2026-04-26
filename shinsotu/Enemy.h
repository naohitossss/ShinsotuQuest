#pragma once

#include "Charactor.h"
#include <string>

class Enemy: public Charactor {
	public:
		Enemy(int hp, int power, int, int exp,int id) 
			: _hp(hp), _exp(exp), _power(power),_id(id){};
		virtual ~Enemy() = default;
		void IncreaseHp(int &hp) override;
		void DecreaseHp(int &hp) override;
		void AddExp(int &exp) override;
		void Destroy() override;

		int GetExp() const { return _exp; }
		int GetHp() const { return _hp; }
		int GetPower() const { return _power; }
	private:
		std::string _name;
		int _hp;
		int _maxHp = 100;
		int _power;
		Position _level;
		int _exp;
		bool _isDead = false;
		int _id;
};