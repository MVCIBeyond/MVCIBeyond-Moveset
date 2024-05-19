#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "SequencerSettingObj.generated.h"

UCLASS(Blueprintable)
class DUCK_API ASequencerSettingObj : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CameraNearClipPlane;
    
public:
    ASequencerSettingObj(const FObjectInitializer& ObjectInitializer);

};

