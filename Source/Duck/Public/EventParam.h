#pragma once
#include "Engine.h"
#include "EEventParamType.h"
#include "EventParam.generated.h"

USTRUCT()
struct FEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEventParamType Type;
    
    DUCK_API FEventParam();
};

