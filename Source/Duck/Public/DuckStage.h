#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "DuckStage.generated.h"

class ADuckCharaVisualManager;
class UGemLightSettings;
class UStageLightSetting;

UCLASS(Blueprintable)
class DUCK_API ADuckStage : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaVisualManager* Visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageLightSetting* StageLightSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGemLightSettings*> GemSetting;
    
public:
    ADuckStage(const FObjectInitializer& ObjectInitializer);

};

