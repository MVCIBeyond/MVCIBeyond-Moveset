#pragma once
#include "Engine.h"
#include "ELockedMirrorSetting.h"
#include "DuckCharaLockedMotionSetting.generated.h"

USTRUCT()
struct DUCK_API FDuckCharaLockedMotionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PartsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELockedMirrorSetting MirrorSetting;
    
    FDuckCharaLockedMotionSetting();
};

