#include "DuckModule.h"
#include "DuckSimpleResultCharacter.h"

ADuckSimpleResultCharacter::ADuckSimpleResultCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponentParts.AddDefaulted(80);
    this->OriginalMeshComoonentPartsForArrange.AddDefaulted(80);
}

void ADuckSimpleResultCharacter::SetupStencil(bool FlgOn, int32 Value) {
}


