#include "DuckModule.h"
#include "SimpleEffectEmitter.h"
#include "DuckModule.h"
#include "DuckParticleSystemComponent.h"

ASimpleEffectEmitter::ASimpleEffectEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("ParticleComponent"));
    this->ParticleComponent = (UDuckParticleSystemComponent*)RootComponent;
}


