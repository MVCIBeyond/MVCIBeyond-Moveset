#pragma once
#include "Engine.h"
#include "AppendAnimInf.generated.h"

USTRUCT()
struct DUCK_API FAppendAnimInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    FAppendAnimInf();
};

