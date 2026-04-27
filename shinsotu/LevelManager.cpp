#include "LevelManager.h"


Position LevelManager::CheckLevel(Position position, int exp) {
	int haveExp = GetLevelExp(position++);
	if (exp >= haveExp) {
	}
	return position;	
}

int LevelManager::GetLevelExp(Position position) const {
    auto iterator = _PositionExp.find(position);
    if (iterator != _PositionExp.end()) {
        return iterator->second;
    }
    return 0;
}

/*
#include <conio.h>
if (_kbhit()) {
            // バッファから1文字取得（エコーバックなし）
            int inputKey = _getch(); 

            switch (inputKey) {
                case 32: // スペースキー
                    return CommandType::INTERACT;
                
                case 27: // Escキー
                    return CommandType::CANCEL;*/