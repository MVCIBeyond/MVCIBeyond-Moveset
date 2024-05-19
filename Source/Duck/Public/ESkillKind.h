#pragma once
#include "Engine.h"
#include "ESkillKind.generated.h"

UENUM()
enum class ESkillKind : uint8 {
    NORMAL,
    SPECIAL,
    HYPER,
    OTHER,
    NM_THROW,
    SP_THROW,
    HC_THROW,
};

