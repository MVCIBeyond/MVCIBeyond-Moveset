#pragma once
#include "Engine.h"
#include "MatParamCollectMgr.generated.h"

class UMaterialParameterCollection;

USTRUCT()
struct DUCK_API FMatParamCollectMgr {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* mpMatParamCollect;
    
public:
    FMatParamCollectMgr();
};

