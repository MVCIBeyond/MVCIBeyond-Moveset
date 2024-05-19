#pragma once
#include "Engine.h"
#include "Engine/DataTable.h"
#include "PreLoadAssetPathCSV.generated.h"

USTRUCT()
struct FPreLoadAssetPathCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PATH;
    
    DUCK_API FPreLoadAssetPathCSV();
};

