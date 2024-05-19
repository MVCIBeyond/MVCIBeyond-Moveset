#pragma once
#include "Engine.h"
#include "ECharacterAssetGimmickDeadOperation.generated.h"

UENUM()
enum class ECharacterAssetGimmickDeadOperation : uint8 {
    OP_DELETE,
    OP_CANCEL,
    OP_CANCEL2DELETE,
};

