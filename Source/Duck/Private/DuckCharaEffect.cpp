#include "DuckModule.h"
#include "DuckCharaEffect.h"

ADuckCharaEffect::ADuckCharaEffect(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParticleAssetCmn = NULL;
    this->StageParticleAssetCmn = NULL;
    this->StageParticleAssetCmn999 = NULL;
    this->StoryParticleAssetCmn = NULL;
    this->StageParticleParameter = NULL;
    this->Visual = NULL;
}


