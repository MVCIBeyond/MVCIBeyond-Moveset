#pragma once
#include "Engine.h"
#include "EasyCommandSelTrg.generated.h"

USTRUCT()
struct DUCK_API FEasyCommandSelTrg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    FEasyCommandSelTrg();
};

