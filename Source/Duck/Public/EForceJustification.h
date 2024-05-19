#pragma once
#include "Engine.h"
#include "EForceJustification.generated.h"

UENUM()
enum class EForceJustification : uint8 {
    UseDefault,
    ForceLeft,
    ForceCenter,
    ForceRight,
};

