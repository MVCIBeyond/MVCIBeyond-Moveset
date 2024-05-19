#include "DuckModule.h"
#include "PersistentVisionEmitter.h"
#include "DuckModule.h"
#include "DuckSkeletalMeshComponent.h"

APersistentVisionEmitter::APersistentVisionEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->SkeletalMeshComponent = (UDuckSkeletalMeshComponent*)RootComponent;
    this->SkeletalMeshComponentParts.AddDefaulted(80);
    this->ParentActor = NULL;
    this->ChangeMaterialAsset = NULL;
}


