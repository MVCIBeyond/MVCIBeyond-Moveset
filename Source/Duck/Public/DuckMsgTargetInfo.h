#pragma once
#include "Engine.h"
#include "EMsgBtlTrgCategory.h"
#include "DuckMsgTargetInfo.generated.h"

USTRUCT()
struct FDuckMsgTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMsgBtlTrgCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ArrCharaID;
    
    DUCK_API FDuckMsgTargetInfo();
};

