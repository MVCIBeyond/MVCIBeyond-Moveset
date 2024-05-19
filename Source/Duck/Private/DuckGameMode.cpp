#include "DuckModule.h"
#include "DuckGameMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "DuckModule.h"
#include "DuckHUDBase.h"
#include "DuckModule.h"
#include "DuckPlayerController.h"

ADuckGameMode::ADuckGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = ADuckPlayerController::StaticClass();
    this->HUDClass = ADuckHUDBase::StaticClass();
    this->DefaultPawnClass = APawn::StaticClass();
    this->bUseSeamlessTravel = true;
}


