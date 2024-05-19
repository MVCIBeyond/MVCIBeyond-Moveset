#include "DuckModule.h"
#include "DuckCharaVisualManager.h"
#include "DuckModule.h"
#include "DuckSkeletalMeshComponent.h"

ADuckCharaVisualManager::ADuckCharaVisualManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("SklComponent"));
    this->CharaMotionParent = NULL;
    this->DuckCameraMotion = NULL;
    this->DuckCharaEffect = NULL;
    this->DuckCharaProjectile = NULL;
    this->DuckCharaMaterialCollection = NULL;
    this->DuckStage = NULL;
    this->CommonSkeletalComponent = (UDuckSkeletalMeshComponent*)RootComponent;
    this->CommonSkeletalMesh = NULL;
    this->DuckCharaAssetCommon = NULL;
    this->RollBackAction = NULL;
    this->CharacterSetLoad = NULL;
    this->BattleHUD = NULL;
}

TArray<ADuckCharaMotion*> ADuckCharaVisualManager::getDuckCharaMotionArray() const {
    return TArray<ADuckCharaMotion*>();
}


