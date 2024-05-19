#pragma once
#include "Engine.h"
#include "ProfileBackGroundInfo.generated.h"

USTRUCT()
struct DUCK_API FProfileBackGroundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PosUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PosFB;
    
    FProfileBackGroundInfo();
};

