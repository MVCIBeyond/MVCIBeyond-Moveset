#pragma once
#include "Engine.h"
#include "TextureValue.generated.h"

class UTexture;

USTRUCT()
struct FTextureValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> Textures;
    
    DUCK_API FTextureValue();
};

