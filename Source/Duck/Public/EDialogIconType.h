#pragma once
#include "Engine.h"
#include "EDialogIconType.generated.h"

UENUM()
enum class EDialogIconType : uint8 {
    DIALOG_ICON_ERROR,
    DIALOG_ICON_INFORMATION,
    DIALOG_ICON_WAITING,
    DIALOG_ICON_WAITINGWITHMANNER,
};

