#pragma once
#include "Engine.h"
#include "EParticleType.generated.h"

UENUM()
enum class EParticleType : uint8 {
    NORMAL_PARTICLE,
    DEATH_PARTICLE,
    GEM_PARTICLE,
};

