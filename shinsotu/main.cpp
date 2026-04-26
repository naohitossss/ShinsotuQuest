#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "BattleProfessor.h"
#include "CommandProffesser.h"
#include <string>

int main()
{
	Player* player = new Player(100, 20, 1, 0);
	Enemy* enemy = new Enemy(50, 10, 1, 20, 1);
	CommandPoffesser* commandPoffesser = new CommandPoffesser(*player);


	std::cout << "Welcome to the battle! Choose your action:" << std::endl;
	BattleProfessor *battleProfessor = new BattleProfessor(*player, *enemy);
	while (true) 
	{
		std::string input;
		std::cin >> input;
		switch (stoi(input))
		{
			case 1:
				commandPoffesser->AttackCommand(*battleProfessor);
				break;
			case 2:
				int itemNumber;
				std::cin >> itemNumber;
				commandPoffesser->UseItemCommand(itemNumber);
				break;
			case 3:
				commandPoffesser->GameOver();
				return 0;
		}
	}
}