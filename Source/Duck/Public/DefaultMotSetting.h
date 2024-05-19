#pragma once
#include "Engine.h"
#include "DefaultMotSetting.generated.h"

USTRUCT()
struct DUCK_API FDefaultMotSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mot_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mot_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mot_speed;
    
    FDefaultMotSetting();
};

