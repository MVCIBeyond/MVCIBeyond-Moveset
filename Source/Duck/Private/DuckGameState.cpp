#include "DuckModule.h"
#include "DuckGameState.h"

ADuckGameState::ADuckGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mpLoadAsset = NULL;
}

void ADuckGameState::RequestUnloadAssets() {
}

bool ADuckGameState::RequestLoadAssets(const FString& PackNames, EDuckLoadPrio Prio) {
    return false;
}

bool ADuckGameState::IsLoadAssetsEnd() const {
    return false;
}


