#pragma once
#include "Engine.h"
#include "EDamageDir.generated.h"

UENUM()
enum class EDamageDir : uint8 {
    DIR_AUTO,
    DIR_FRONT,
    DIR_BACK,
};

