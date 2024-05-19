#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "DuckStageSkeletalBase.generated.h"

UCLASS(Blueprintable)
class DUCK_API ADuckStageSkeletalBase : public AActor {
    GENERATED_BODY()
public:
    ADuckStageSkeletalBase(const FObjectInitializer& ObjectInitializer);

};

