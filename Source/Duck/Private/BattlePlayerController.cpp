#include "DuckModule.h"
#include "BattlePlayerController.h"

ABattlePlayerController::ABattlePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}


