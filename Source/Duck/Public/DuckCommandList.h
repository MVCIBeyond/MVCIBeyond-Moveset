#pragma once
#include "Engine.h"
#include "DuckCommandListInner.h"
#include "DuckCommandList.generated.h"

USTRUCT()
struct DUCK_API FDuckCommandList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckCommandListInner> Unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckCommandListInner> Special;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckCommandListInner> Hyper;
    
    FDuckCommandList();
};

