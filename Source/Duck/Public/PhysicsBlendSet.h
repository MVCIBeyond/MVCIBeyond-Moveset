#pragma once
#include "Engine.h"
#include "PhysicsBlendSet.generated.h"

USTRUCT()
struct FPhysicsBlendSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    DUCK_API FPhysicsBlendSet();
};

