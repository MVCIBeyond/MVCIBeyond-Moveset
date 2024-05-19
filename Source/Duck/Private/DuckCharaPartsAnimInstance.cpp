#include "DuckModule.h"
#include "DuckCharaPartsAnimInstance.h"

UDuckCharaPartsAnimInstance::UDuckCharaPartsAnimInstance() {
    this->ParentInstance = NULL;
}

TArray<FTransform> UDuckCharaPartsAnimInstance::GetParentPose() {
    return TArray<FTransform>();
}


