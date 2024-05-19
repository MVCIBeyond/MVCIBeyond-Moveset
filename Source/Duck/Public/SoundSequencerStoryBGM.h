#pragma once
#include "Engine.h"
#include "GameFramework/Actor.h"
#include "EStreamSoundType.h"
#include "SoundSequencerStoryBGM.generated.h"

class UAtomComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class DUCK_API ASoundSequencerStoryBGM : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* AtomCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EStreamSoundType SoundType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool StopSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
public:
    ASoundSequencerStoryBGM(const FObjectInitializer& ObjectInitializer);

};

