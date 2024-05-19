#pragma once
#include "Engine.h"
#include "ELobbyVoiceRestrict.generated.h"

UENUM()
enum class ELobbyVoiceRestrict : uint8 {
    RESTRICT_NONE,
    RESTRICT_BATTLELIST,
};

