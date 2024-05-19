#pragma once
#include "Engine.h"
#include "EConfigDummyAction.generated.h"

UENUM()
enum class EConfigDummyAction : uint8 {
    STAND,
    CROUCH,
    JUMP,
    SUPER_JUMP,
    WALK_FORWARD,
    RECORD,
    PLAYER,
    ENEMY,
};

