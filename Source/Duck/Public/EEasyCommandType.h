#pragma once
#include "Engine.h"
#include "EEasyCommandType.generated.h"

UENUM()
enum class EEasyCommandType : uint8 {
    AR_U,
    AR_D,
    AR_L,
    AR_R,
    TYPE_MAX UMETA(Hidden),
};

