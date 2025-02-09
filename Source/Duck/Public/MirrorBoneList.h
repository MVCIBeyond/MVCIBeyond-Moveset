#pragma once
#include "Engine.h"
#include "MirrorNodeConfig.h"
#include "MirrorBoneList.generated.h"

USTRUCT()
struct DUCK_API FMirrorBoneList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMirrorNodeConfig> ConfigArray;
    
    FMirrorBoneList();
};

