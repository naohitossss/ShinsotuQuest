#include "CommandProffesser.h"
#include <iostream>

void CommandPoffesser::GameOver()
{
	_player->Destroy();
}

void CommandPoffesser::AttackCommand(BattleProfessor& battleProfessor)
{
	battleProfessor.PlayerAttack();
}

void CommandPoffesser::UseItemCommand(int itemNumber)
{
	std::cout << "Using item with ID: " << itemNumber << std::endl;
}