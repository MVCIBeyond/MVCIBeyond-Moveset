#pragma once
#include "Engine.h"
#include "EInviteProcessResult.generated.h"

UENUM()
enum class EInviteProcessResult : uint8 {
    WAIT,
    SUCCESS,
    FAIL,
};

