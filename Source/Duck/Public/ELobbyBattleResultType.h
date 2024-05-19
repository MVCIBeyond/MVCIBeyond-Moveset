#pragma once
#include "Engine.h"
#include "ELobbyBattleResultType.generated.h"

UENUM()
enum class ELobbyBattleResultType : uint8 {
    WIN,
    LOSE,
    DRAW,
};

