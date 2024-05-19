#pragma once
#include "Engine.h"
#include "DuckCommandListInner.h"
#include "DuckMissionCommandList.generated.h"

USTRUCT()
struct DUCK_API FDuckMissionCommandList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckCommandListInner> Command;
    
    FDuckMissionCommandList();
};

