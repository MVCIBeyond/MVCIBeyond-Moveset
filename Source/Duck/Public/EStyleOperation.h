#pragma once
#include "Engine.h"
#include "EStyleOperation.generated.h"

UENUM()
enum class EStyleOperation : uint8 {
    SET,
    ADD,
    AND,
    OR,
};

