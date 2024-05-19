#pragma once
#include "Engine.h"
#include "GlobalParamKonjo.generated.h"

USTRUCT()
struct DUCK_API FGlobalParamKonjo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Vital;
    
    FGlobalParamKonjo();
};

