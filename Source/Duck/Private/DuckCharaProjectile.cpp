#include "DuckModule.h"
#include "DuckCharaProjectile.h"

ADuckCharaProjectile::ADuckCharaProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Visual = NULL;
    this->ParticleAssetCmn = NULL;
    this->StageParticleAssetCmn = NULL;
}


