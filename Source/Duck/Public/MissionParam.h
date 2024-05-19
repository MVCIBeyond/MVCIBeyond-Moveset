#pragma once
#include "Engine.h"
#include "MissionParamStage.h"
#include "MissionParam.generated.h"

USTRUCT()
struct DUCK_API FMissionParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionParamStage Stage[40];
    
    FMissionParam();
};

