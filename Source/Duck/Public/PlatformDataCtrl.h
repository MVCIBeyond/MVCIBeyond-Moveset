#pragma once
#include "Engine.h"
#include "PlatformDataCtrl.generated.h"

class UMsgDataTbl;

USTRUCT()
struct DUCK_API FPlatformDataCtrl {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgDataTbl* mpPlatformMsgData;
    
public:
    FPlatformDataCtrl();
};

