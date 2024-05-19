#pragma once
#include "Engine.h"
#include "EDialogType.generated.h"

UENUM()
enum class EDialogType : uint8 {
    Error,
    Admin,
    System,
    Notice,
    Information,
    Confirm,
    Hint,
    Progress,
    Select1,
    Select2,
    Waiting,
};

