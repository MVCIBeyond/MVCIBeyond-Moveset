#pragma once
#include "Engine.h"
#include "HitRect16.generated.h"

USTRUCT()
struct DUCK_API FHitRect16 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SizeY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SizeX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 OffsetY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 OffsetX;
    
    FHitRect16();
};

