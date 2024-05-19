#pragma once
#include "Engine.h"
#include "EUIInputKey.generated.h"

UENUM()
enum class EUIInputKey : uint8 {
    FaceButton_Top,
    FaceButton_Bottom,
    FaceButton_Left,
    FaceButton_Right,
    LeftShoulder,
    RightShoulder,
    LeftTrigger,
    RightTrigger,
    ThumbLeftStic_Button,
    ThumbRightStic_Button,
    Special_Left,
    Special_Right,
    Decide,
    Cancel,
    Up,
    UpperRight,
    Right,
    LowerRight,
    Down,
    LowerLeft,
    Left,
    UpperLeft,
    Max,
};

