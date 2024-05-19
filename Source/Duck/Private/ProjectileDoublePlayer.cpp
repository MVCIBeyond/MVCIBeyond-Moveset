#include "DuckModule.h"
#include "ProjectileDoublePlayer.h"

AProjectileDoublePlayer::AProjectileDoublePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SkeletalMeshComponentParts.AddDefaulted(80);
    this->OriginalMeshComoonentPartsForArrange.AddDefaulted(80);
    this->MaterialChangeAsset = NULL;
}


