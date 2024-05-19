#pragma once
#include "Engine.h"
#include "CHARACTER_SETTING.generated.h"

USTRUCT()
struct DUCK_API FCHARACTER_SETTING {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColorNo;
    
    FCHARACTER_SETTING();
};

