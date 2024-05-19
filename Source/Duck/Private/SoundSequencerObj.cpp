#include "DuckModule.h"
#include "SoundSequencerObj.h"

#include "AtomComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=AtomComponent -FallbackName=AtomComponent

ASoundSequencerObj::ASoundSequencerObj(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHidden = true;
    this->bCanBeDamaged = false;
    this->RootComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
    this->AtomComponent = (UAtomComponent*)RootComponent;
    this->AtomCue = NULL;
}

void ASoundSequencerObj::SetUse3DPos() {
}


