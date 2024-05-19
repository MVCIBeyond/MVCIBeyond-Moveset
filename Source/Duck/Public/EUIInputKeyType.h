#pragma once
#include "Engine.h"
#include "EUIInputKeyType.generated.h"

UENUM()
enum class EUIInputKeyType : uint8 {
    Press,
    Trigger,
    Release,
    Repeat,
};

