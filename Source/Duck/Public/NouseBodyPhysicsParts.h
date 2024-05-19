#pragma once
#include "Engine.h"
#include "NouseBodyPhysicsParts.generated.h"

USTRUCT()
struct DUCK_API FNouseBodyPhysicsParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BodyPhysicsName;
    
    FNouseBodyPhysicsParts();
};

