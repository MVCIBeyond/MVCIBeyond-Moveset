#pragma once
#include "Engine.h"
#include "GameFramework/HUD.h"
#include "DuckHUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class DUCK_API ADuckHUDBase : public AHUD {
    GENERATED_BODY()
public:
    ADuckHUDBase(const FObjectInitializer& ObjectInitializer);

};

