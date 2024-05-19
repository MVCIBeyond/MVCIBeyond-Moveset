#pragma once
#include "Engine.h"
#include "EDataType.generated.h"

UENUM()
enum class EDataType : uint8 {
    SystemData,
    ReplayData,
    KPIData,
};

