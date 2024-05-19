#pragma once
#include "Engine.h"
#include "EAutoMatchSelect.generated.h"

UENUM()
enum class EAutoMatchSelect : uint8 {
    SELECT_NONE,
    SELECT_RETRY,
    SELECT_EASERETRY,
    SELECT_INFINITE,
    SELECT_EASEINFINITE,
};

