#include "DuckModule.h"
#include "DuckParticleSystemComponent.h"

UDuckParticleSystemComponent::UDuckParticleSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseAsOccluder = true;
    this->bIgnoreCulling = true;
    this->bRenderCustomDepth = true;
    this->TickType = 2;
    this->TickComponentDisable = true;
    this->OldTransform.AddDefaulted(120);
    this->LightActor = NULL;
    this->LightControlComponent = NULL;
    this->LightComponent = NULL;
}

void UDuckParticleSystemComponent::StopEmitParticle(bool isOverrideLastTick) {
}

void UDuckParticleSystemComponent::StartEmitParticle(bool isOverrideLastTick) {
}

void UDuckParticleSystemComponent::SetupForStageEffect() {
}

void UDuckParticleSystemComponent::KillAllParticle() {
}

bool UDuckParticleSystemComponent::GetWasCompleted() const {
    return false;
}

bool UDuckParticleSystemComponent::GetIsHultSpawn() const {
    return false;
}


