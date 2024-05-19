#pragma once
#include "Engine.h"
#include "Engine/DataTable.h"
#include "CommandListCSV.generated.h"

USTRUCT()
struct FCommandListCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Command;
    
    DUCK_API FCommandListCSV();
};

