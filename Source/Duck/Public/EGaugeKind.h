#pragma once
#include "Engine.h"
#include "EGaugeKind.generated.h"

UENUM()
enum class EGaugeKind : uint8 {
    NONE,
    VITAL,
    HYPER_COMBO,
    TWO_PLATOON,
    GEM,
};

