#pragma once
#include "Engine.h"
#include "AttachBoneSetting.generated.h"

USTRUCT()
struct DUCK_API FAttachBoneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 attach_bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 attached_bone;
    
    FAttachBoneSetting();
};

