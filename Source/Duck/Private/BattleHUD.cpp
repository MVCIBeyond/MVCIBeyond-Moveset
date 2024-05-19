#include "DuckModule.h"
#include "BattleHUD.h"

ABattleHUD::ABattleHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->mpVisualManager = NULL;
}


