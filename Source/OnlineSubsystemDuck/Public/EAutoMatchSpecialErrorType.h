#pragma once
#include "Engine.h"
#include "EAutoMatchSpecialErrorType.generated.h"

UENUM()
enum class EAutoMatchSpecialErrorType : uint8 {
    AUTOMATCH_TIMEOUT = 2,
    AUTOMATCH_ROOKIESERROR,
    AUTOMATCH_CONTEXTERROR,
};

