#pragma once
#include "Engine.h"
#include "EDialogCloseType.generated.h"

UENUM()
enum class EDialogCloseType : uint8 {
    DIALOG_CLOSE_ONLY_DECIDE,
    DIALOG_CLOSE_ONLY_CANCEL,
    DIALOG_CLOSE_DECIDE_OR_CANCEL,
    DIALOG_CLOSE_NOT_CLOSE_INPUT,
    DIALOG_CLOSE_DECIDE_OR_CANCEL_OR_X,
    DIALOG_CLOSE_DECIDE_OR_CANCEL_OR_Y,
};

