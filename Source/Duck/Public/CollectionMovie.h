#pragma once
#include "Engine.h"
#include "CollectionMovie.generated.h"

USTRUCT()
struct DUCK_API FCollectionMovie {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 index;
    
    FCollectionMovie();
};

