#pragma once
#include "Engine.h"
#include "MissionSaveData.generated.h"

USTRUCT()
struct DUCK_API FMissionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ArrMissionClearFlg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ArrTutorialClearFlg;
    
    FMissionSaveData();
};

