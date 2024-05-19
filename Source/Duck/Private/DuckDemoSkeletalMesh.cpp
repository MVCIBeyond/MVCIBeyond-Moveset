#include "DuckModule.h"
#include "DuckDemoSkeletalMesh.h"
#include "DuckModule.h"
#include "DuckDemoSkeletalMeshComponent.h"

ADuckDemoSkeletalMesh::ADuckDemoSkeletalMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDuckDemoSkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->RootSkMeshComponent = (UDuckDemoSkeletalMeshComponent*)RootComponent;
    this->NouseClothPhysics = false;
    this->FlgTeleportOn = false;
    this->PhysicsAssetOriginal = NULL;
}

void ADuckDemoSkeletalMesh::Setup() {
}

void ADuckDemoSkeletalMesh::SetPhysicsBlendSet(const TArray<FPhysicsBlendSet>& Set) {
}


