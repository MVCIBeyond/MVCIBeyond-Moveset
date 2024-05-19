#include "DuckModule.h"
#include "SoundSequencerStoryBGM.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=AtomComponent -FallbackName=AtomComponent

ASoundSequencerStoryBGM::ASoundSequencerStoryBGM(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
    this->AtomComponent = (UAtomComponent*)RootComponent;
    this->AtomCue = NULL;
    this->SoundType = EStreamSoundType::STREAM_BATTLE;
    this->StopSound = false;
    this->FadeOutTime = 2500.00f;
}


