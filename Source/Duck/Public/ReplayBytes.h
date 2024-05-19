#pragma once
#include "Engine.h"
#include "ReplayBytes.generated.h"

USTRUCT()
struct DUCK_API FReplayBytes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Bytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFavorite;
    
    FReplayBytes();
};

