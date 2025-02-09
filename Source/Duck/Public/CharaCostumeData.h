#pragma once
#include "Engine.h"
#include "ECHARA_ATTR_MATERIAL.h"
#include "CharaCostumeData.generated.h"

USTRUCT()
struct FCharaCostumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECHARA_ATTR_MATERIAL Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Screen_CharaEff;
    
    DUCK_API FCharaCostumeData();
};

