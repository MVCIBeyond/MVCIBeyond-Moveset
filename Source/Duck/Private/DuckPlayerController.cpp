#include "DuckModule.h"
#include "DuckPlayerController.h"

ADuckPlayerController::ADuckPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}


