#pragma once
#include "Engine.h"
#include "RollBackParameterActioninf.generated.h"

USTRUCT()
struct DUCK_API FRollBackParameterActioninf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActionFrame;
    
    FRollBackParameterActioninf();
};

