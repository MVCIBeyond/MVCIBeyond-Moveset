#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "PadManagerUpdater.generated.h"

class UObject;

UCLASS(Blueprintable)
class DUCK_API APadManagerUpdater : public AActor {
    GENERATED_BODY()
public:
    APadManagerUpdater(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="pWorldContext"))
    static void SpawnPadManagerUpdaterDoseNotExist(UObject* pWorldContext);
    
};

