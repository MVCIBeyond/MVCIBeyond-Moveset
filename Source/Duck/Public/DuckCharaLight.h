#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "LightSetting.h"
#include "DuckCharaLight.generated.h"

class ADuckCharaVisualManager;
class ULightControlComponent;

UCLASS(Blueprintable)
class DUCK_API ADuckCharaLight : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<ULightControlComponent*> LightCntrolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightSetting> LightSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UClass*> LightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaVisualManager* Visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLightSetting> LightInf;
    
public:
    ADuckCharaLight(const FObjectInitializer& ObjectInitializer);

};

