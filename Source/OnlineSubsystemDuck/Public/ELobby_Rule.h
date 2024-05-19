#pragma once
#include "Engine.h"
#include "ELobby_Rule.generated.h"

UENUM()
enum class ELobby_Rule : uint8 {
    BOTH_REMAIN,
    WINNER_REMAIN,
    LOSER_REMAIN,
};

