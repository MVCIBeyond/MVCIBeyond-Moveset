#pragma once
#include "Engine.h"
#include "MotionBlendParameter.generated.h"

USTRUCT()
struct DUCK_API FMotionBlendParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 blend_frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 frame_cnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blend_alpha;
    
    FMotionBlendParameter();
};

