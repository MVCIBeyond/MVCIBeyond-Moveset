#pragma once
#include "Engine.h"
#include "AttachChildActor.generated.h"

USTRUCT()
struct DUCK_API FAttachChildActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    FAttachChildActor();
};

