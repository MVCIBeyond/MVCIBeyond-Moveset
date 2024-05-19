#pragma once
#include "Engine.h"
#include "ButtonConfigTeam.generated.h"

USTRUCT()
struct DUCK_API FButtonConfigTeam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Input[16];
    
    FButtonConfigTeam();
};

