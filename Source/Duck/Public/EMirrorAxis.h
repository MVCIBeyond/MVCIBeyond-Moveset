#pragma once
#include "Engine.h"
#include "EMirrorAxis.generated.h"

UENUM()
namespace EMirrorAxis {
    enum Type {
        NONE,
        X,
        Y,
        XY,
        Z,
        XZ,
        YZ,
        XYZ,
    };
}

