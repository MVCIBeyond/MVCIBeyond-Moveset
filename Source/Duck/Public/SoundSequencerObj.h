#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "SoundSequencerObj.generated.h"

class UAtomComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class DUCK_API ASoundSequencerObj : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* AtomCue;
    
public:
    ASoundSequencerObj(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUse3DPos();
    
};

