#pragma once
#include "Engine.h"
#include "ETrainingShortcutType.generated.h"

UENUM()
enum class ETrainingShortcutType : uint8 {
    None,
    CommandList,
    Restart,
};

