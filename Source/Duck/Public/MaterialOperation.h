#pragma once
#include "Engine.h"
#include "MaterialOperation.generated.h"

class UMaterialInterface;
class UTexture;

USTRUCT()
struct FMaterialOperation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* parent_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> Texture;
    
    DUCK_API FMaterialOperation();
};

