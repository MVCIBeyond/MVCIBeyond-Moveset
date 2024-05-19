#include "DuckModule.h"
#include "CableControlComponent.h"

UCableControlComponent::UCableControlComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CableLengthCureve = NULL;
    this->SolverIterationsCureve = NULL;
    this->CableComponent = NULL;
}


