#pragma once
#include "Engine.h"
#include "MatCtrlUVName.generated.h"

USTRUCT()
struct FMatCtrlUVName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameV;
    
    DUCK_API FMatCtrlUVName();
};

