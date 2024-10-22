#pragma once
#include "Engine.h"
#include "RollBackParameterGimmickInf.h"
#include "RollBackParameterGimmickInfMap.generated.h"

USTRUCT()
struct DUCK_API FRollBackParameterGimmickInfMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterGimmickInf> GimmickInfParameterVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterGimmickInf> GimmickInfParameterMaterial;
    
    FRollBackParameterGimmickInfMap();
};

