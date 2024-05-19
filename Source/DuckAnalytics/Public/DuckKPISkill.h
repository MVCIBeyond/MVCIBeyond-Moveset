#pragma once
#include "Engine.h"
#include "DuckKPISkill.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPISkill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 FunctionType;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 Count;
    
    FDuckKPISkill();
};

