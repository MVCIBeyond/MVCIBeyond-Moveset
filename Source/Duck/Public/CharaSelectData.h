#pragma once
#include "Engine.h"
#include "CharaSelectData.generated.h"

USTRUCT()
struct DUCK_API FCharaSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlType;
    
    FCharaSelectData();
};

