#pragma once
#include "Engine.h"
#include "CommandAssetParaST.h"
#include "ECommandAssetType.h"
#include "CommandAssetParaN.generated.h"

USTRUCT()
struct DUCK_API FCommandAssetParaN {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandAssetParaST Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandAssetType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    FCommandAssetParaN();
};

