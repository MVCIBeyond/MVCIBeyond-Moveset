#pragma once
#include "Engine.h"
#include "AnimNode_DuckBase.h"
#include "AnimNode_DuckPartsPlayer.generated.h"

USTRUCT()
struct DUCK_API FAnimNode_DuckPartsPlayer : public FAnimNode_DuckBase {
    GENERATED_BODY()
public:
    FAnimNode_DuckPartsPlayer();
};

