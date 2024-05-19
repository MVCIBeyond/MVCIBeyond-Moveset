#pragma once
#include "Engine.h"
#include "ButtonConfigTeam.h"
#include "ButtonConfigParam.generated.h"

USTRUCT()
struct DUCK_API FButtonConfigParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonConfigTeam TeamData[2];
    
    FButtonConfigParam();
};

