#pragma once
#include "Engine.h"
#include "EDialogKind.generated.h"

UENUM()
enum class EDialogKind : uint8 {
    DIALOG_KIND_NORMAL,
    DIALOG_KIND_ERROR,
    DIALOG_KIND_END,
};

