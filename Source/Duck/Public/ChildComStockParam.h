#pragma once
#include "Engine.h"
#include "ChildComStockParam.generated.h"

class USceneComponent;

USTRUCT()
struct DUCK_API FChildComStockParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* mpParentCom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> mArrChildCom;
    
    FChildComStockParam();
};

