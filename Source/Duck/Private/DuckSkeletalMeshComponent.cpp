#include "DuckModule.h"
#include "DuckSkeletalMeshComponent.h"

UDuckSkeletalMeshComponent::UDuckSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrawOpacityStencilCF = OSCF_Greater;
    this->DrawOpacityStencilPassStencilOp = OSO_Replace;
    this->TestOpacityStencilCF = OSCF_GreaterEqual;
    this->bIgnoreCulling = true;
    this->ParentSkeletalMeshComponent = NULL;
}


