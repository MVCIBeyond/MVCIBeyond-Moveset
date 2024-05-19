#pragma once
#include "Engine.h"
#include "EEffectRunType.generated.h"

UENUM()
enum class EEffectRunType : uint8 {
    PreRun,
    PostRun,
};

