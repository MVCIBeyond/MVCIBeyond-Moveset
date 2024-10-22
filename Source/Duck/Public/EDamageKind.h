#pragma once
#include "Engine.h"
#include "EDamageKind.generated.h"

UENUM()
enum class EDamageKind : uint8 {
    KIND_NONE,
    KIND_ICE,
    KIND_FIRE,
    KIND_ELEC,
    KIND_PSYCO,
    KIND_BLEED,
    KIND_SHOCK,
    KIND_POISON,
    KIND_SOUL,
    KIND_S_BITE,
};

