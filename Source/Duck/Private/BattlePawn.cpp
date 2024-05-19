#include "DuckModule.h"
#include "BattlePawn.h"
#include "DuckModule.h"
#include "Components/SceneComponent.h"

ABattlePawn::ABattlePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}


