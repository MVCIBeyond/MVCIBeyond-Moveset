#pragma once
#include "Engine.h"
#include "TriggerEnable.generated.h"

USTRUCT()
struct FTriggerEnable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 trigger_group_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 trigger_kind_flags;
    
    DUCK_API FTriggerEnable();
};

