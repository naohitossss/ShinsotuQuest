#pragma once

#include "Charactor.h"
#include <vector>

class Player: public Charactor {
	public:
		Player(int hp, int power, int, int exp) : _hp(hp), _exp(exp), _power(power) {};
		virtual ~Player() = default;
		virtual void IncreaseHp(int &hp) override;
		virtual void DecreaseHp(int &hp) override;
		virtual void AddExp(int &exp) override;
		virtual void Destroy() override;
		void AddItem(int itemId);
		void UseItem(int itemId);
		
		int GetPower() const { return _power; }

	private:
		std::string _name;
		int _hp;
		int _maxHp = 100;
		int _power;
		Position _level;
		int _exp;
		bool _isDead = false;
		std::vector<int> _itemList;

};