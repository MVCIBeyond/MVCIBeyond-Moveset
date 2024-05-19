#pragma once
#include "Engine.h"
#include "ECharaSelectVoiceTargetType.h"
#include "CharaSelectVoiceData.generated.h"

USTRUCT()
struct FCharaSelectVoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharaSelectVoiceTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetId;
    
    DUCK_API FCharaSelectVoiceData();
};

