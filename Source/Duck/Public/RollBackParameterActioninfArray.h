#pragma once
#include "Engine.h"
#include "RollBackParameterActioninf.h"
#include "RollBackParameterActioninfArray.generated.h"

USTRUCT()
struct DUCK_API FRollBackParameterActioninfArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterActioninf> ActionInf;
    
    FRollBackParameterActioninfArray();
};

