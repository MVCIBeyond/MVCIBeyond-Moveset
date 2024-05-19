#pragma once
#include "Engine.h"
#include "ESaveGameBranch.generated.h"

UENUM()
enum class ESaveGameBranch : uint8 {
    Success,
    Failure,
};

