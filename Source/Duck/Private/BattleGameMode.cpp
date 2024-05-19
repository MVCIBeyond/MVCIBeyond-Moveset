#include "DuckModule.h"
#include "BattleGameMode.h"
#include "DuckModule.h"
#include "BattleHUD.h"
#include "DuckModule.h"
#include "BattlePawn.h"
#include "DuckModule.h"
#include "BattlePlayerController.h"

ABattleGameMode::ABattleGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ABattlePlayerController::StaticClass();
    this->HUDClass = ABattleHUD::StaticClass();
    this->DefaultPawnClass = ABattlePawn::StaticClass();
}

EScrollEventType ABattleGameMode::GetScrollEventType() {
    return EScrollEventType::EVENT_NONE;
}


