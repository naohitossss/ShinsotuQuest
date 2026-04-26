#pragma once
#include "Player.h"
#include "BattleProfessor.h"
#include "Enemy.h"

class CommandPoffesser
{
public:
	CommandPoffesser(Player& player) :_player(&player) {};
	~CommandPoffesser() = default;
	void GameOver();
	void AttackCommand(BattleProfessor& battleProfessor);
	void UseItemCommand(int itemNumber);
private:
	Player* _player;
};