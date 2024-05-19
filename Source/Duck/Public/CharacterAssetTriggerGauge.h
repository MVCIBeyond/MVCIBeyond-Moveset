#pragma once
#include "Engine.h"
#include "CharacterAssetTriggerGauge.generated.h"

USTRUCT()
struct DUCK_API FCharacterAssetTriggerGauge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VitalConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VitalNeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SHC_GaugeConsume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SHC_GaugeNeed;
    
    FCharacterAssetTriggerGauge();
};

