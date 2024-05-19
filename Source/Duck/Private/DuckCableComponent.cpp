#include "DuckModule.h"
#include "DuckCableComponent.h"

UDuckCableComponent::UDuckCableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CastShadow = false;
}


