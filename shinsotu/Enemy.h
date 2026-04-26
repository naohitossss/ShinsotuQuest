#pragma once

#include "Charactor.h"
#include <string>

class Enemy: public Charactor {
	public:
		Enemy() = default;
		virtual ~Enemy() = default;
		void IncreaseHp(int &hp) override;
		void DecreaseHp(int &hp) override;
		void AddExp(int &exp) override;
		void Destroy() override;
	private:
		std::string _name;
		int _hp;
		int _maxHp;
		int _power;
		Position _level;
		int _exp;
		bool _isDead;
		int _id;
};