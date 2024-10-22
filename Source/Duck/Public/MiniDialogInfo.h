#pragma once
#include "Engine.h"
#include "EDialogIconType.h"
#include "MiniDialogInfo.generated.h"

USTRUCT()
struct FMiniDialogInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialogIconType Icon;
    
    DUCK_API FMiniDialogInfo();
};

