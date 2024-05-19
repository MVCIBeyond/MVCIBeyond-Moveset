#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameState -FallbackName=GameState
#include "EDuckLoadPrio.h"
#include "DuckGameState.generated.h"

class ULoadAssets;

UCLASS(Blueprintable)
class DUCK_API ADuckGameState : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadAssets* mpLoadAsset;
    
public:
    ADuckGameState(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RequestUnloadAssets();
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoadAssets(const FString& PackNames, EDuckLoadPrio Prio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadAssetsEnd() const;
    
};

