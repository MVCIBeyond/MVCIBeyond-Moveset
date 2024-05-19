#pragma once
#include "Engine.h"
#include "DuckGameMode.h"
#include "EScrollEventType.h"
#include "BattleGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class DUCK_API ABattleGameMode : public ADuckGameMode {
    GENERATED_BODY()
public:
    ABattleGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    EScrollEventType GetScrollEventType();
    
};

