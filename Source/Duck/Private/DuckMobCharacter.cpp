#include "DuckModule.h"
#include "DuckMobCharacter.h"
#include "DuckModule.h"
#include "DuckSkeletalMeshComponent.h"

ADuckMobCharacter::ADuckMobCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->SkeletalMeshComponent = (UDuckSkeletalMeshComponent*)RootComponent;
    this->ShouldTickViewPort = true;
    this->BlendAlphaMotion = 1.00f;
}


