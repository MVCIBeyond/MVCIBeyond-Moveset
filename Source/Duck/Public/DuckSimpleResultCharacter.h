#pragma once
#include "Engine.h"
#include "DuckSimpleCharacter.h"
#include "DuckSimpleResultCharacter.generated.h"

UCLASS(Blueprintable)
class DUCK_API ADuckSimpleResultCharacter : public ADuckSimpleCharacter {
    GENERATED_BODY()
public:
    ADuckSimpleResultCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupStencil(bool FlgOn, int32 Value);
    
};

