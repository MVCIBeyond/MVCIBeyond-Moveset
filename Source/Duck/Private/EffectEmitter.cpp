#include "DuckModule.h"
#include "EffectEmitter.h"
#include "DuckModule.h"
#include "DuckParticleSystemComponent.h"

AEffectEmitter::AEffectEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("ParticleComponent"));
    this->ParticleComponent = (UDuckParticleSystemComponent*)RootComponent;
    this->RestoreComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("RestoreComponent"));
    this->CableActor = NULL;
    this->CableControlComponent = NULL;
    this->State = EEmitterState::SPAWNING;
    this->CharaMesh = NULL;
    this->CharaMeshMirror = NULL;
    this->Visual = NULL;
    this->RestoreComponent->SetupAttachment(RootComponent);
}


