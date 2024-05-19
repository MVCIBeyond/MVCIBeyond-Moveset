#pragma once
#include "Engine.h"
#include "ESaveLoadBranch.generated.h"

UENUM()
enum class ESaveLoadBranch : uint8 {
    Success,
    Failure,
    Progress,
};

