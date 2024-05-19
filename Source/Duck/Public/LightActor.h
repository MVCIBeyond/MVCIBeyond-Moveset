#pragma once
#include "Engine.h"
#include "LightActor.generated.h"

class UBlueprint;

USTRUCT()
struct DUCK_API FLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlueprint* Light;
    
    FLightActor();
};

