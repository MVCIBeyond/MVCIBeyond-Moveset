#pragma once
#include "Engine.h"
#include "HitPatternUnique.generated.h"

USTRUCT()
struct DUCK_API FHitPatternUnique {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> UniqueList;
    
    FHitPatternUnique();
};

