#include "DuckModule.h"
#include "DuckHUDBase.h"

ADuckHUDBase::ADuckHUDBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
}


