#pragma once
#include "Engine.h"
#include "EPauseMenuStatus.generated.h"

UENUM()
enum EPauseMenuStatus {
    None,
    select,
    DECIDE,
    PRE_TRANSITION,
    TRANSITION,
};

