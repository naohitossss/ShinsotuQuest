#pragma once

#include "Charactor.h"
#include <vector>

class Player: public Charactor {
	public:
		Player() = default;
		virtual ~Player() = default;
		virtual void IncreaseHp(int &hp) override;
		virtual void DecreaseHp(int &hp) override;
		virtual void AddExp(int &exp) override;
		virtual void Destroy() override;
		void AddItem(int itemId);
		void UseItem(int itemId);
	private:
		std::string _name;
		int _hp;
		int _maxHp;
		int _power;
		Position _level;
		int _exp;
		bool _isDead;
		std::vector<int> _itemList;

};