#pragma once
#include "Engine.h"
#include "LookAtEyeSetting.generated.h"

USTRUCT()
struct DUCK_API FLookAtEyeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeftEyeMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RightEyeMaterialIndex;
    
    FLookAtEyeSetting();
};

