#pragma once
#include "Engine.h"
#include "FacialMotionSetting.generated.h"

USTRUCT()
struct DUCK_API FFacialMotionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppearSoundFacialBlendFrame;
    
    FFacialMotionSetting();
};

