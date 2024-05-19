#pragma once
#include "Engine.h"
#include "KeyConfigPair.h"
#include "KeyConfig.generated.h"

USTRUCT()
struct DUCK_API FKeyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyConfigPair> ConfigArray;
    
    FKeyConfig();
};

