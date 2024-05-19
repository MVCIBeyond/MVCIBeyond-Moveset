#pragma once
#include "Engine.h"
#include "ECharacterAssetMotType.generated.h"

UENUM()
enum class ECharacterAssetMotType : uint8 {
    COMMONOBJECT,
    UNIQUEOBJECT,
    UNIQUECAMERA,
    UNIQUEFACIAL,
    TARGETOBJECT,
    OPTIONOBJECT,
    COMMONCAMERA,
};

