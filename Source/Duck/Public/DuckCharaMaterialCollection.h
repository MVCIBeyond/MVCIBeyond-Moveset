#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "DuckCharaMaterialCollection.generated.h"

class ADuckCharaVisualManager;
class APostProcessVolume;
class UMaterial;
class UMaterialParameterCollection;

UCLASS(Blueprintable)
class DUCK_API ADuckCharaMaterialCollection : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaVisualManager* Visual;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PostProcessVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* NegapositiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* BlackScreenMaterial;
    
public:
    ADuckCharaMaterialCollection(const FObjectInitializer& ObjectInitializer);

};

