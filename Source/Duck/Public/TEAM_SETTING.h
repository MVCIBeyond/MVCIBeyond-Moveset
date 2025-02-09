#pragma once
#include "Engine.h"
#include "CHARACTER_SETTING.h"
#include "TEAM_SETTING.generated.h"

USTRUCT()
struct DUCK_API FTEAM_SETTING {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCHARACTER_SETTING MainCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCHARACTER_SETTING SubCharacter;
    
    FTEAM_SETTING();
};

