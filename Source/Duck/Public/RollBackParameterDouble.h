#pragma once
#include "Engine.h"
#include "RollBackParameterDouble.generated.h"

USTRUCT()
struct DUCK_API FRollBackParameterDouble {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LifeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedFrame;
    
    FRollBackParameterDouble();
};

