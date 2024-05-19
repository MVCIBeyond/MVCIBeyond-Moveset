#pragma once
#include "Engine.h"
#include "OriginalMaterialParts.generated.h"

class UDuckPlayerColorMaterialAsset;

USTRUCT()
struct DUCK_API FOriginalMaterialParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckPlayerColorMaterialAsset* OriginalMaterialAsset;
    
    FOriginalMaterialParts();
};

