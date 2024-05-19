#pragma once
#include "Engine.h"
#include "ELearderBoardKind.generated.h"

UENUM()
enum class ELearderBoardKind : uint8 {
    KIND_LEVEL,
    KIND_WINS,
    KIND_STREAK,
};

