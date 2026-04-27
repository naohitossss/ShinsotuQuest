#pragma once
#include <map>
#include "../"

enum class Position {
	NOVICE,
};

class LevelManager :public SystemObject {
public:
	LevelManager() {};
	virtual ~LevelManager(){};
		
	Position CheckLevel(Position position,int exp);//レベルアップするかどうかを✅
	int GetLevelExp (Position position) const;//レベルに付与する経験ちを✅
		
private:
	std::map<Position, int> _PositionExp;
};