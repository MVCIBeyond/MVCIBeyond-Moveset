#pragma once
#include "Engine.h"
#include "DuckKPIChapter.h"
#include "DuckKPIStory.generated.h"

USTRUCT()
struct DUCKANALYTICS_API FDuckKPIStory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckKPIChapter> Chapter;
    
    FDuckKPIStory();
};

