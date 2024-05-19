#pragma once
#include "Engine.h"
#include "EUIMenuItemType.generated.h"

UENUM()
enum class EUIMenuItemType : uint8 {
    None,
    CheckBox,
    PressBtn,
    Slider,
    SpinGrph,
    SpinText,
    Spacer,
    SpacerHalf,
    RadioBtn,
    NUM,
};

