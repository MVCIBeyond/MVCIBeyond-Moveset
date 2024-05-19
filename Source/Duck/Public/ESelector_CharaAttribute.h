#pragma once
#include "Engine.h"
#include "ESelector_CharaAttribute.generated.h"

UENUM()
enum class ESelector_CharaAttribute : uint8 {
    SELECTOR_ATTR_S_NORMAL,
    SELECTOR_ATTR_S_METAL,
    SELECTOR_ATTR_M_NORMAL,
    SELECTOR_ATTR_M_METAL,
    SELECTOR_ATTR_L_NORMAL,
    SELECTOR_ATTR_L_METAL,
    SELECTOR_ATTR_SWORD,
};

