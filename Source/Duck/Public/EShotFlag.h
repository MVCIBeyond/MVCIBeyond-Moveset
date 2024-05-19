#pragma once
#include "Engine.h"
#include "EShotFlag.generated.h"

UENUM()
enum class EShotFlag : uint8 {
    NON_FLAG,
    HIT_DELETE_SHOT,
    NATURAL_DELETE_SHOT,
    COUNTERACT_SHOT,
    INSTANT_DELETE,
    DELETED_SHOT,
};

