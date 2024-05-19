#pragma once
#include "Engine.h"
#include "UIMenuItemData.generated.h"

class UUIMenuItemDataAsset;

USTRUCT()
struct DUCK_API FUIMenuItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIMenuItemDataAsset* ItemData;
    
    FUIMenuItemData();
};

